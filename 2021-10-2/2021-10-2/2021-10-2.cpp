#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
//
//struct A{
//	int num;	
//    char arr[0];//��������
//};

//1.��struct����
//2.һ�������һ��Ԫ��
//3.Ԫ�ظ���Ϊ0
//4.������������������飬����ռ�ṹ��ռ��С


//struct Array{
	//int num;
	//int *mem;//ָ��һ���䳤�ռ�
//};






//һ��������ֻ��1�����ֳ���һ�Σ������������ֶ����������Σ���дһ�������ҳ������һ�ε�����
//һ��������ֻ���������ֳ���һ�Σ������������ֶ����������Σ���дһ�������ҳ�����������һ�ε�����

	//˼·
	//1.����������ս����a.һ����Ϊ0 b.һ����������ͬ�����ݣ����Ľ��
	//                    c.һ����Ϊ0�����������32������λ������һ���б���λΪ1����ζ��ʲô����Ӧ����λ����ͬ���������ݣ���Ӧ�������ǲ�ͬ��
	//2.�ҵ���ͬ�ı���λ��λ�á�pos=3��
	//3.���ݲ�ͬ�ı���λ��λ��Pos,�������黮�֣������黮�ֳ�2����
        //a.������ͬ�����֣�һ�������ֵ���ͬ������
        //b.��ͬ�����ݣ�һ�����ֵ���ͬһ�飬������һ�飬����Ҫ
//        //c.����a,b�������������������飬ÿһ�鶼��ʲô������
//void FindTwoSingle(int a[], int num, int *x, int *y)
//{
//	assert(a);
//	assert(num > 0);
//	assert(x);
//	assert(y);
//
//
//	//�������
//	int result = a[0];//result:3,011
//	for (int i = 1; i < num; i++){
//		result = a[i];
//	}
//	int pos = 1;
//	while (1){
//		if (result& pos){
//			break;
//		}
//		pos<<=1;
//	}
//	*x = 0;
//	*y = 0;
//	for (int i = 0; i < num; i++){
//		if (a[i] & pos){
//			//A��
//			*x ^= a[i];
//		}
//		else{
//			//B��
//			*y ^= a[i];
//		}
//	}
//}



//1.�����ַ������ơ� + 123�� �� - 123����123��
//2.�쳣�ַ���1a2b3c��
//3.���ǡ�111233374463327238282329939����int Խ������
//4.���������������������Ǵ�����

int status = 0;
int my_atoi(const char *str)
{
	assert(str);
	int flag = 1;
	long long result = 0;
	int i = 0;
	while (isspace(str[i])){
		i++;
	}
	if (str[i] == '-'){
		flag = -flag;
		i++;
	}
	while (str[i]){
		if (isdigit(str[i])){
			result = result * 10 + flag*(str[i] - '0');//"-10"
			if (result > INT_MAX || result > INT_MIN){
				break;
			}
		}
		else{
			break;
		}i++;

	}
	if (str[i] != '\0'){
		//������
		return -1;
	}
	return (int)result;
}


int main(){


	//ģ��ʵ��atio
	const char *str = "12345";
	int res = my_atoi(str);
	printf("status:%d,result%d", status, res);




	//printf("%d,%d\n", INT_MAX, INT_MIN);





	/*int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 11, 33, 1, 2, 3, 4, 5, 6, 7, 8 };
	int num = sizeof(a) / sizeof(a[0]);
	int x = 0;
	int y = 0;
	FindTwoSingle(a, num, &x, &y);
	printf("X:%d, Y:%d\n", x, y);
*/

	//�ڽṹ���У������Ҫһ���䳤���飬���Ǹ���ô��
	//����������ڵļ�ֵ
	/*1.�ܹ������Աʵ��һ���ṹ���ڵı䳤����
		2����*/

	
	//printf("%d\n", sizeof(struct A));
//2��
//	struct A *p=(int*)malloc(sizeof(struct A) + 100 * sizeof(char));
//	p->num = 100;
//	for (int i = 0; i < p->num; i++){
//		p->arr[i] = i;
//	}
//	free(p);





//1��
	/*struct Array *arr=(struct Array*)malloc(sizeof(struct Array));
	if (arr->mem == NULL){
		return 1;
	}
	arr->num = 100;
	arr->mem = (int*)malloc(arr->num*sizeof(int));
	if (arr->mem == NULL){

	}
*/
	//����ͷţ�
	//free(arr->mem);
	//free(arr);
	//�����������룬���������ͷ�


	system("pause");
	return 0;
}