#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void chushiboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int s = 0;
	for (i = 0; i < row; i++)
	{
		for (s = 0; s < col; s++)
		{
			board[i][s] = ' ';
		}
	}

}

void dayinboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int s = 0;
	for (int a = 0; a < col; a++)
	{

		printf("   %d", a + 1);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		
		for (s = 0; s < col; s++)
		{
			if (s == 0)
			{
				printf("%-2d",i+1);
			}
			printf(" %c ", board[i][s]);
			if (s < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row-1)
		{
			printf("  ");
			for (s = 0; s < col; s++)
			{
				printf("---");
				if (s < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void player_1move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家 一 落子\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入。\n");
			}

		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}


}
void player_2move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家 二 落子\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入。\n");
			}

		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

//返回“*”玩家一胜利
//返回“#”玩家二胜利
//返回“p“平局
//返回空格‘ ’继续
char panduan(char board[ROW][COL], int row, int col)
{

	for (int x = 0; x < row; x++)
	{
		//判断三行
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][1] != ' ')
		{
			return board [x][1];
		}
	}
	for (int y = 0; y < col; y++)
	{
		//判断三列
		if (board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[1][y] == ' ')
		{
			return board [0][y];
		}
		
	}
	//判断对角线
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[1][1] != ' '))
	{
		return board [1][1];
	}
	
	for (int a = 0; a < row; a++)
	{
		for (int b = 0; b < col; b++)
		{
			if (board [a][b] == ' ')
			{
				return ' ';
			}
		}
	}
	return 'p';
}