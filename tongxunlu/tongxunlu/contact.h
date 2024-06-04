#pragma once


//类型的定义
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
//通讯录 - 静态版本
////通讯录
//struct tongxunlu
//{
//	struct contact con[MAX];//通讯录中的元素
//	int sz;//通讯录现在的有效信息
//};



//通讯录 - 动态版本
//通讯录
struct tongxunlu
{
	struct contact *con;//指向动态申请的空间
	int sz;//通讯录现在的有效信息
	int content;//通讯录的最大容量
};
//初始化通讯录
void chushi(struct tongxunlu* pc);

//增加联系人
void addren(struct tongxunlu* pc);

//打印通讯录
void printren(const struct tongxunlu* pc);

//删除联系人
void delren(struct tongxunlu* pc);

//查找联系人
void search(const struct tongxunlu* pc);

//修改联系人
void modifyren(struct tongxunlu* pc);

//释放空间
void xiaohu(struct tongxunlu* pc);

//保存通讯录
void savetongxunlu(struct tongxunlu* pc);