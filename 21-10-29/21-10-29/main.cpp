#include "chess.h"
////////////////////////////////////////////////////////////////////
//�˵�
void Menu()
	{
		printf("#######��ӭ������������Ϸ#########\n");
		printf("###1.play             2.exit####\n");
		printf("################################\n");
		printf("���������ѡ��\n");
	}
//////////////////////////////////////////////////////////////////////
int main()
{
	int quit= 0;
	while (!quit){
		int select = 0;
		Menu();
        scanf("%d", &select);

		switch (select){
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("enter error");
			break;
		}
	}
	
	system("pause");
	return 0;
}