#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



void caidan()
{
	printf("******************************\n");
	printf("**********   扫雷   **********\n");
	printf("******************************\n");
	printf("**********  1.start **********\n");
	printf("******************************\n");
	printf("**********  2.exit  **********\n");
	printf("******************************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的地雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的地雷的信息
	//初始化函数
	chushiboard(mine, ROWS, COLS, '0');
	chushiboard(show, ROWS, COLS, '*');
	//打印棋盘
	dayinboard(show, ROW, COL);
	
	//布置地雷
	setmine(mine, ROW, COL);
	dayinboard(mine, ROW, COL);
	//排查地雷
	findmine(mine, show, ROW, COL);

}
int main()
{
	srand((unsigned int )time(NULL));
	int a = 0;
	do
	{
		caidan();
		printf("请选择");
		scanf("%d", &a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			a = 1;
			break;

		}


	} while (a==1);


	return 0;
}