#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



void caidan()
{
	printf("******************************\n");
	printf("**********   ɨ��   **********\n");
	printf("******************************\n");
	printf("**********  1.start **********\n");
	printf("******************************\n");
	printf("**********  2.exit  **********\n");
	printf("******************************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõĵ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų���ĵ��׵���Ϣ
	//��ʼ������
	chushiboard(mine, ROWS, COLS, '0');
	chushiboard(show, ROWS, COLS, '*');
	//��ӡ����
	dayinboard(show, ROW, COL);
	
	//���õ���
	setmine(mine, ROW, COL);
	dayinboard(mine, ROW, COL);
	//�Ų����
	findmine(mine, show, ROW, COL);

}
int main()
{
	srand((unsigned int )time(NULL));
	int a = 0;
	do
	{
		caidan();
		printf("��ѡ��");
		scanf("%d", &a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			a = 1;
			break;

		}


	} while (a==1);


	return 0;
}