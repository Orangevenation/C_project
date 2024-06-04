#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



void menu()
{
	printf("***********************************\n");
	printf("**********    三子棋    ***********\n");
	printf("***********************************\n");
	printf("**********    1.start   ***********\n");
	printf("***********************************\n");
	printf("**********    2.exit    ***********\n");
	printf("***********************************\n");
}
void game()
{
	//储存数据
	char board[ROW][COL] = { 0 };
	//初始化棋盘 - 空格
	chushiboard (board, ROW, COL);
	while (1)
	{


		//打印一下棋盘 - 本质上是打印数组的元素
		dayinboard(board, ROW, COL);
		//玩家 1 移动 并打印棋盘
		player_1move(board, ROW, COL);
		dayinboard(board, ROW, COL);

		//判断胜利 并打印棋盘
		char a=panduan(board, ROW, COL);
	
		if (a == '*')
		{
			printf("玩家 一 胜利\n");
			dayinboard(board, ROW, COL);
			break;
		}
		else if (a == 'p')
		{
			printf("平局\n");
			dayinboard(board, ROW, COL);
			break;
		}

		//玩家 2 移动 并打印棋盘
		player_2move(board, ROW, COL);
		dayinboard(board, ROW, COL);
		//判断胜利 并打印棋盘
		char b=panduan(board, ROW, COL);
		
		if (b == '#')
		{
			printf("玩家 二 胜利\n");
			dayinboard(board, ROW, COL);
			break;
		}
		else if (a == 'p')
		{
			printf("平局\n");
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
		printf("请选择");
		scanf("%d", &a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			a = 2;
			break;
		default:
			printf("选择错误，请重新选择\n");
			a = 1;
			break;
		}
	} while (a==1);
	return 0;
}