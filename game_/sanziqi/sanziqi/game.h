#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
//���ŵĶ���
#define ROW 3
#define COL 3


//����������

//��ʼ�����̵ĺ�������
void chushiboard(char board[ROW][COL], int row, int col);


//��ӡ���̺���������
void dayinboard(char board[ROW][COL], int row,int col);
//��� 1 �ƶ���������
void player_1move(char board[ROW][COL], int row, int col);
//��� 2 �ƶ���������
void player_2move(char board[ROW][COL], int row, int col);
//�ж�ʤ����ֺ���������
char panduan(char board [ROW][COL],int row, int col);