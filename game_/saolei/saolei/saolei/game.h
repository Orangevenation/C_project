#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <stdio.h>


//初始化棋盘的函数声明
void chushiboard(char board[ROWS][COLS], int rows, int cols, char xing);
//打印棋盘函数的声明
void dayinboard(char board[ROWS][COLS], int row, int col);
//布置地雷的函数声明
void setmine(char mine[ROWS][COLS], int row, int col);
//查找地雷的函数声明
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
