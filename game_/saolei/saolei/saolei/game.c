#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdlib.h>
#include <time.h>


void chushiboard(char board[ROWS][COLS], int rows, int cols, char xing)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < rows; x++)
	{
		for (y = 0; y < cols; y++)
		{
			board[x][y] = xing;
		}
	}
}
void dayinboard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("---------扫雷游戏---------\n");
	
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (x = 1; x <= row; x++)
	{
		printf("%d ", x);
		for (y = 1; y <= col; y++)
		{
			printf("%c ", board[x][y]);
		}
		printf("\n");
	}
	printf("--------------------------\n");

}
void setmine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	int sum = 0;
	while(sum< EASY_COUNT)//布置十个雷
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			sum++;
		}
		
	}

}

int count(char mine[ROWS][COLS], int x, int y)
{
	int z = 0;
	z = mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
	return z;
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		int x = 0;
		int y = 0;
		printf("请输入要排查的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//如果是雷，游戏结束
			if (mine[x][y] == '1')
			{
				printf("被雷炸死了，游戏结束\n");
				dayinboard(mine, ROW, COL);
				break;
			}
			else
			{
				int sum = count(mine, x, y);
				if (sum == 0)
				{
					show[x][y] = sum + '0';
					int a = 0;
					a = count(mine, x + 1, y + 1);
					show[x + 1][y + 1] = a + '0';
					a = count(mine, x , y + 1);
					show[x ][y + 1] = a + '0';
					a = count(mine, x-1, y + 1);
					show[x-1][y + 1] = a + '0';
					a = count(mine, x - 1, y );
					show[x - 1][y] = a + '0';
					a = count(mine, x+1, y );
					show[x + 1][y ] = a + '0';
					a = count(mine, x - 1, y - 1);
					show[x - 1][y - 1] = a + '0';
					a = count(mine, x , y - 1);
					show[x ][y - 1] = a + '0';
					a = count(mine, x + 1, y - 1);
					show[x + 1][y - 1] = a + '0';
				}
				show[x][y] = sum + '0';
				win++;
				dayinboard(show, ROW, COL);
			}
		}
		else
		{
			printf("请输入合法坐标\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你扫雷成功\n");
		dayinboard(mine, row, col);
	}

}