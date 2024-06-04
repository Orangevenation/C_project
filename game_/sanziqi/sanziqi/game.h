#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
//符号的定义
#define ROW 3
#define COL 3


//函数的声明

//初始化棋盘的函数声明
void chushiboard(char board[ROW][COL], int row, int col);


//打印棋盘函数的声明
void dayinboard(char board[ROW][COL], int row,int col);
//玩家 1 移动函数声明
void player_1move(char board[ROW][COL], int row, int col);
//玩家 2 移动函数声明
void player_2move(char board[ROW][COL], int row, int col);
//判断胜利结局函数的声明
char panduan(char board [ROW][COL],int row, int col);