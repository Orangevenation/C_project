#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



void menu()
{
	printf("***********************************\n");
	printf("**********    ������    ***********\n");
	printf("***********************************\n");
	printf("**********    1.start   ***********\n");
	printf("***********************************\n");
	printf("**********    2.exit    ***********\n");
	printf("***********************************\n");
}
void game()
{
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������ - �ո�
	chushiboard (board, ROW, COL);
	while (1)
	{


		//��ӡһ������ - �������Ǵ�ӡ�����Ԫ��
		dayinboard(board, ROW, COL);
		//��� 1 �ƶ� ����ӡ����
		player_1move(board, ROW, COL);
		dayinboard(board, ROW, COL);

		//�ж�ʤ�� ����ӡ����
		char a=panduan(board, ROW, COL);
	
		if (a == '*')
		{
			printf("��� һ ʤ��\n");
			dayinboard(board, ROW, COL);
			break;
		}
		else if (a == 'p')
		{
			printf("ƽ��\n");
			dayinboard(board, ROW, COL);
			break;
		}

		//��� 2 �ƶ� ����ӡ����
		player_2move(board, ROW, COL);
		dayinboard(board, ROW, COL);
		//�ж�ʤ�� ����ӡ����
		char b=panduan(board, ROW, COL);
		
		if (b == '#')
		{
			printf("��� �� ʤ��\n");
			dayinboard(board, ROW, COL);
			break;
		}
		else if (a == 'p')
		{
			printf("ƽ��\n");
			dayinboard(board, ROW, COL);
			break;
		}

	}



}
int main()
{
	int a=0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			a = 2;
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			a = 1;
			break;
		}
	} while (a==1);
	return 0;
}