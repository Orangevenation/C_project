#pragma once


//���͵Ķ���
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#define CHUSHI 3
#define KUORONG 2

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct contact
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}con;
//ͨѶ¼ - ��̬�汾
////ͨѶ¼
//struct tongxunlu
//{
//	struct contact con[MAX];//ͨѶ¼�е�Ԫ��
//	int sz;//ͨѶ¼���ڵ���Ч��Ϣ
//};



//ͨѶ¼ - ��̬�汾
//ͨѶ¼
struct tongxunlu
{
	struct contact *con;//ָ��̬����Ŀռ�
	int sz;//ͨѶ¼���ڵ���Ч��Ϣ
	int content;//ͨѶ¼���������
};
//��ʼ��ͨѶ¼
void chushi(struct tongxunlu* pc);

//������ϵ��
void addren(struct tongxunlu* pc);

//��ӡͨѶ¼
void printren(const struct tongxunlu* pc);

//ɾ����ϵ��
void delren(struct tongxunlu* pc);

//������ϵ��
void search(const struct tongxunlu* pc);

//�޸���ϵ��
void modifyren(struct tongxunlu* pc);

//�ͷſռ�
void xiaohu(struct tongxunlu* pc);

//����ͨѶ¼
void savetongxunlu(struct tongxunlu* pc);