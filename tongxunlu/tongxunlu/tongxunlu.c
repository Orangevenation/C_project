#define _CRT_SECURE_NO_WARNINGS 1
//通讯录
// 1.能够存放1000个人
// 每个人的信息
//名字+年龄+性别+电话+地址
//2.增加联系人信息
//3.删除指定人的信息
//4.修改指定人的信息
//5.查找指定人的信息
//6.排序通讯录的信息
//



#include "contact.h"

void menu()
{
	printf("**********************************************\n");
	printf("**********1.add          2.del   *************\n");
	printf("**********3.search       4.modify*************\n");
	printf("**********5.sort         6.print *************\n");
	printf("**********0.exit                 *************\n");
	printf("**********************************************\n");
}
enum MyEnum
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	//创建通讯录
	struct tongxunlu txl;
	//初始化通讯录
	//开辟三个人信息空间
	//sz置为0
	chushi(& txl);
	int input = 0;;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			savetongxunlu(&txl);
			printf("退出");
			xiaohu(&txl);
			break;
		case ADD:
			addren(&txl);
			break;
		case DEL:
			delren(&txl);
			break;
		case SEARCH:
			search(&txl);
			break;
		case MODIFY:
			modifyren(&txl);
			break;
		case SORT:
			break;
		case PRINT:
			printren(&txl);
			break;
		default:
			printf("选择错误，请重新选择！！！\n");
			break;
		}
	} while (input);
	return 0;
}