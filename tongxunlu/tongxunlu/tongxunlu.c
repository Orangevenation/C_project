#define _CRT_SECURE_NO_WARNINGS 1
//ͨѶ¼
// 1.�ܹ����1000����
// ÿ���˵���Ϣ
//����+����+�Ա�+�绰+��ַ
//2.������ϵ����Ϣ
//3.ɾ��ָ���˵���Ϣ
//4.�޸�ָ���˵���Ϣ
//5.����ָ���˵���Ϣ
//6.����ͨѶ¼����Ϣ
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
	//����ͨѶ¼
	struct tongxunlu txl;
	//��ʼ��ͨѶ¼
	//������������Ϣ�ռ�
	//sz��Ϊ0
	chushi(& txl);
	int input = 0;;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			savetongxunlu(&txl);
			printf("�˳�");
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
			printf("ѡ�����������ѡ�񣡣���\n");
			break;
		}
	} while (input);
	return 0;
}