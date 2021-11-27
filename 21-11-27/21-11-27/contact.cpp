#include "contact.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��ʼ��ͨѶ¼
void InitContact(contact_t **ct)
{
		*ct = (contact_t *)malloc(sizeof(contact_t) + INIT_NUM*sizeof(person_t));
		if (*ct == NULL){
			perror("malloc");
			exit(1);
		}
		(*ct)->size = 0;
		(*ct)->cap = INIT_NUM;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ж���ϵ���Ƿ����
static int IsExist(contact_t *ct, person_t *p){
	assert(ct);
	assert(p);

	int i = 0;
	for (; i < ct->size; i++){
		if (strcmp(ct->friends[i].name, p->name) == 0){
			return 1;
		}
	}
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ж�ͨѶ¼�Ƿ�����
static int IsFull(contact_t *ct)
{
	return ct->cap == ct->size;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�ж�ͨѶ¼�Ƿ�Ϊ��
static int IsEmpty(contact_t *ct)
{
	return ct->size == 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ͨѶ¼����
static int Inc(contact_t **ct)
{
	assert(ct);
	contact_t *ct_temp = (contact_t *)realloc(*ct, sizeof(contact_t) + ((*ct)->cap + INC_SIZE)*sizeof(person_t));
	if (ct_temp == NULL){
		return 0;
	}
	*ct = ct_temp;
	(*ct)->cap += INC_SIZE;
	printf("�Զ����ݳɹ�\n");
	return 1;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����µ���ϵ��
void AddFriend(contact_t **ct)
{
	assert(ct);
	//ͨѶ¼�Ѿ������أ��Զ�����
	if (!IsFull(*ct) || Inc(ct))//���û��������ִ�к������룬������ˣ��Զ�����&&���ݳɹ�
	{
		person_t p;
		printf("�����������û�������:");
		scanf("%s", p.name);//name��һ������
		printf("�����������û����Ա�:");
		scanf("%s", p.sex);
		printf("�����������û������:");
		scanf("%d", &(p.age));
		printf("�����������û��ĵ绰:");
		scanf("%s", p.telphone);
		printf("�����������û��ĵ�ַ:");
		scanf("%s", p.address);

		//�ж���ǰ�û��Ƿ��Ѿ�����
		if (IsExist(*ct, &p)){
			printf("%s �Ѿ����ڣ��벻Ҫ�ظ�����\n", p.name);
			return;
		}
		//(*ct)->friend[(*ct)->size] = p;
		memcpy((*ct)->friends + (*ct)->size, &p, sizeof(p));
		(*ct)->size += 1;
		printf("�����û�%s�ɹ�\n", p.name);
	}
	else{
		printf("����ʧ��\n");
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���ĺ���
static int SearchCore(contact_t *ct, const char *name)
{
	assert(ct);
	assert(name);
	int i = 0;
	for (; i < ct->size; i++)
	{
		person_t *p = ct->friends + i;
		if (strcmp(name, p->name) == 0){
			return i;
		}
	}
	return -1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//������ϵ��
void SearchFriend(contact_t *ct)
{
	assert(ct);
	printf("��������Ҫ���ҵ��˵�����#");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	printf("|%-10s|%-10s|%-10s|%-10s|%10s|\n", "����", "�Ա�", "���", "�绰", "��ַ");
	if (i >= 0){
		person_t *p = ct->friends + i;
		printf("| %-10s | %-10s | %-10d | %-10s | % 10s | \n", p->name, p->sex, p->age, p->telphone, p->address);
	}
	else{

		printf("��Ҫ���ҵ���%s������\n", name);
	}
	return;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�޸���ϵ��
void ModFriend(contact_t *ct)
{
	assert(ct);
	printf("��������Ҫ�޸ĵ��˵�����#");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0){
		//person_t p;
		person_t *p= (ct->friends + i);
		printf("�������޸��û�������:");
		scanf("%s", p->name);//name��һ������
		printf("�������޸��û����Ա�:");
		scanf("%s", p->sex);
		printf("�������޸� �û������:");
		scanf("%d", &(p->age));
		printf("�������޸��û��ĵ绰:");
		scanf("%s", p->telphone);
		printf("�������޸��û��ĵ�ַ:");
		scanf("%s", p->address);
		//(*ct)->friend[(*ct)->size] = p;
		memcpy((ct)->friends + (ct)->size, &p, sizeof(p));
		printf("�޸��û�%s�ɹ�\n", p->name);
	}
	else{
		printf("��Ҫ�޸ĵ���ϵ��%s������\n",name);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//���ͨѶ¼
void ClearContact(contact_t *ct)
{
	assert(ct);
	ct->size = 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ɾ������
void DelFriend(contact_t *ct)
{
	assert(ct);
	printf("��������Ҫɾ�����˵�����#");
	char name[NAME_SIZE];
	scanf("%s", name);
	int i = SearchCore(ct, name);
	if (i >= 0){
		//�������˵���Ϣֱ�Ӹ��ǵ���ǰλ��
		ct->friends[i] = ct->friends[ct->size - 1];
		ct->size -= 1;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("��Ҫɾ������%s������\n", name);
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//��ʾͨѶ¼
void ShowContact(contact_t *ct){
	assert(ct);
	int i = 0;
	printf("|cap:%d|size:%d|\n", ct->cap, ct->size);
	printf("|%-10s|%-10s|%-10s|%-10s|%10s|\n", "����", "�Ա�", "���", "�绰", "��ַ");
	for (; i < ct->size; i++){
		person_t *p = ct->friends + i;
		printf("|%-10s|%-10s|%-10d|%-10s|%10s|\n", p->name, p->sex, p->age, p->telphone, p->address);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�Ƚ���ϵ��
static int CmpPerson(const void *p1,const void *p2)
{
	assert(p1);
	assert(p2);
	person_t *_p1 = (person_t *)p1;
	person_t *_p2 = (person_t *)p2;

	return strcmp(_p1->name, _p2->name);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ͨѶ¼����
void SortContact(contact *ct)
{
	assert(ct);
	if (!IsEmpty(ct)){
		qsort(ct->friends, ct->size, sizeof(person_t), CmpPerson);
	}
    
}