#include "mine.h"

static void Menu()
{
	printf("#############################\n");
	printf("########��ӭ����ɨ����Ϸ#######\n");

	printf("#############################\n");
	printf("##   1.play       2.exit   ##\n");
	printf("#############################\n");
	printf("���������ѡ��");
}


int main(){
	int quit = 0;
	do{
		int select=0;
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("��ǰ��Ϸ�Ѿ���������������һ�Σ�\n");
			break;
		case 2:
			printf("�˳�\n");
			quit = 1;
			break;
		default:
			printf("�����������,����������\n");
			break;
		}

	} while (!quit);
	//printf("hello mine clear\n");
	system("pause");
	return 0;
}