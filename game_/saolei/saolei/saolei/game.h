#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include <stdio.h>


//��ʼ�����̵ĺ�������
void chushiboard(char board[ROWS][COLS], int rows, int cols, char xing);
//��ӡ���̺���������
void dayinboard(char board[ROWS][COLS], int row, int col);
//���õ��׵ĺ�������
void setmine(char mine[ROWS][COLS], int row, int col);
//���ҵ��׵ĺ�������
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
