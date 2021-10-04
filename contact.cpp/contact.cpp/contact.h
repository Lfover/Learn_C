#ifndef _CINTACT_H_
#define _CONTACT_H_

//person �ڲ���Ԫ�صĴ�С
#define NAME_SIZE 32
#define SEX_SIZE 8
#define TELPHONE_SIZE 16
#define ADDRESS_SIZE 128

#include <stdio.h>
#include <Windows.h>
#include <assert.h>
#pragma warning(disable:4996)

//ͨѶ�ĳ�ʼ��Ϣ
#define INIT_NUM 1000
#define INC_SIZE 5

//�ļ���Ϣ
#define SAVE_FILE "save.txt"

typedef struct person{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	int age;
	char telphone[TELPHONE_SIZE];
	char address[ADDRESS_SIZE];
	//int ok;
}person_t;

typedef struct contact{
	FILE *save;
	int cap;    //����
	int size;  //��ǰ��Ч����
	person_t friends[0];//��������
}contact_t;


void InitContact(contact_t **ct);
void AddFriend(contact_t **ct);
void ShowContact(contact_t *ct);
void SearchFriend(contact_t *ct);
void ClearContact(contact_t *ct);
void DelFriend(contact_t *ct);
void SaveContact(contact *ct);
#endif