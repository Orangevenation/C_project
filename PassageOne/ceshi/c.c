#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//void test(int x)
//{
//	
//	x = 1024;
//
//}
//int main()
//{
//	int x = 1;
//	test(x);
//	printf("%d\n", x);
//
//	return 0;
//}


//#include<stdlib.h>
//#define MAX 10//Ĭ����󳤶�
//typedef struct
//{
//	int* date;   //ָ��˳����ָ��
//	int len;     //˳���ǰ����
//	int maxlen;  //��󳤶�
//}SeqList;
//
////��ʼ��˳���
//void Initlist(SeqList* L)
//{
//	//��malloc��������һƬ�����Ŀռ�
//	int* p = (int*)malloc(sizeof(int) * MAX);
//	if (p == NULL)
//	{
//		perror("Initlist");
//		return 1;
//	}
//	L->date = p;
//	L->len = 0;
//	L->maxlen = MAX;
//	p = NULL;
//}
//
////����˳��������
//void Augmentlist(SeqList* L, int a)
//{
//	//ʹ��mallocʵ��
//	int* p = (int*)malloc(sizeof(int)*(L->maxlen + a));
//	if (p == NULL)
//	{
//		perror("Augmentlist");
//		return 1;
//	}
//	for (int i = 0; i < L->len; i++)
//	{
//		p[i] = L->date[i];
//	}
//	free(L->date);
//	L->date = p;
//	L->maxlen += a;
//	p = NULL;
//}
//
////��ӡ˳���
//void PrintList(SeqList* L)
//{
//	for (int i = 0; i < L->len; i++)
//	{
//		printf("%d ", L->date[i]);
//	}
//	printf("\n");
//}
//
////��˳����в���һ��Ԫ��
//void ListInsert(SeqList* L, const int i,const int e)
//{
//	if (i > L->len + 1)
//	{
//		printf("error");
//	}
//	if(L->len == L->maxlen)
//	{
//		Augmentlist(L, 5);//����˳���
//	}
//	for (int j = 0; j < (L->len) - i + 1; j++)
//	{
//		L->date[L->len - j] = L->date[L->len - j - 1];
//	}
//	L->date[i - 1] = e;
//	L->len++;
//}
//
////��˳�����ɾ��һ��Ԫ�ز�����
//int ListDelete(SeqList* L, int i)
//{
//	if ((i < 1) || i > L->len)
//	{
//		printf("error");
//		return 0;
//	}
//	int a=L->date[i - 1];
//	for (int j = 0; j < (L->len) - i; j++)
//	{
//		L->date[i +j-1] = L->date[i+j];
//	}
//	L->len--;
//	return a;
//}
////˳���
//int main()
//{
//	SeqList L;//����һ��˳���
//	Initlist(&L);//��ʼ��˳���
//
//	for (int i = 0; i < L.maxlen; i++)
//	{
//		L.len++;
//		L.date[i] = i;
//	}
//	PrintList(&L);//��ӡ˳���
//	ListInsert(&L, 5, 100);//�ڵ�����λ����Ԫ��100
//	PrintList(&L);//��ӡ˳���
//	printf("��ǰ���������%d\n", L.maxlen);
//
//	int i = 6;
//	int a = ListDelete(&L, i);
//	printf("ɾ���˵�%d��Ԫ�أ�%d\n", i, a);
//
//	PrintList(&L);//��ӡ˳���
//	return 0;
//}


////��������ͷ�ڵ㣩
//#include<stdbool.h>
//#include<stdlib.h>
////��������
//typedef struct Node
//{
//	int data;
//	struct Node*next;
//}Node;
//
////��ʼ������
//void InitNode(Node* L)
//{
//	Node* s;
//	s = malloc(sizeof(Node));
//	if (s == NULL)
//	{
//		perror("IninNode");
//		return 1;
//	}
//	L->next = s;
//	Node* p;
//	p = L;
//	for (int i = 0; i < 10; i++)
//	{
//		s = malloc(sizeof(Node));
//		if (s == NULL)
//		{
//			perror("IninNode");
//			return 1;
//		}
//		p = p->next;
//		p->next = s;
//		p->data = i + 1;
//	}
//	p = p->next;
//	p->data = 11;
//	p->next = NULL;
//	p = NULL;
//	s = NULL;
//}
//
////��ӡ����
//void PrintNode(Node* L)
//{
//	Node* p = L;
//	p = p->next;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//
////��λ��i������ e
//bool InsertNode(Node* L, int i, int e)
//{
//	Node* p = L;
//	for (int j = 0; (j < i-1)&&(p != NULL); j++)
//	{
//		p = p->next;
//	}
//	if (p == NULL)
//	{
//		return false;
//	}
//	Node* s = malloc(sizeof(Node));
//	if (s = NULL)
//	{
//		return false; 
//	}
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	s = NULL;
//}
//
//int main()
//{
//	Node L;//��������
//	InitNode(&L);//��ʼ������
//	PrintNode(&L);//��ӡ����
//	int i, e;
//	i = 88;
//	e = 67;
//	InsertNode(&L, i, e);
//	PrintNode(&L);
//	return 0;
//}



//
//
//
//
////����������ͷ�ڵ㣩
//#include<stdbool.h>
//#include<stdlib.h>
////��������
//typedef struct Node
//{
//	int data;
//	struct Node*next;
//}Node;
//
////��ʼ������
//void InitNode(Node** L)
//{
//	(*L) = NULL;
//}
//
////��ӡ����
//void PrintNode(Node** L)
//{
//	Node* p = *L;
//	while ((p) != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//
////��λ��i������ e
//bool InsertNode(Node** L, int i, int e)
//{
//	Node** pp = L;
//	if (i == 1)
//	{
//		Node* c = malloc(sizeof(Node));
//		c->data = e;
//		c->next=(*pp);
//		(*pp) = c;
//		return true;
//	}
//	Node* p = *L;
//	for (int j = 1; (j < i-1)&&(p != NULL); j++)
//	{
//		p = p->next;
//	}
//	if (p == NULL)
//	{
//		return false;
//	}
//
//	Node* s = malloc(sizeof(Node));
//	if (s == NULL)
//	{
//		return false; 
//	}
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	s = NULL;
//	return true;
//}
//
////��ָ���ڵ�ǰ����e
//bool InsertPriorNode(Node* L, int e)
//{
//	if (L == NULL)
//	{
//		return false;
//	}
//	Node* s = malloc(sizeof(Node));
//	if (s == NULL)
//	{
//		return false;
//	}
//	s->data = L->data;
//	L->data = e;
//	s->next = L->next;
//	L->next = s;
//	return true;
//}
//
////ɾ��λ��i�Ľڵ�
//bool DeleteList(Node** p, int i)
//{
//	Node* L = (*p);
//	int j = 1;
//	while ((L != NULL) && j < i - 1)
//	{
//		L = L->next;
//		j++;
//	}
//	if (L == NULL)
//	{
//		return false;
//	}
//	Node* s = L->next;
//	L->next = s->next;
//	free(s);
//	return true;
//}
//
////ָ���ڵ�ɾ��
//bool DeleteNode(Node** L,Node*p)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	else if (*L == p)
//	{
//		(*L) = p->next;
//		free(p);
//	}
//	else if (p->next == NULL)
//	{
//		Node* q;
//		for ( q = *L; (q->next) != p; q = q->next)
//		{
//			;
//		}
//		free(p->next);
//		q->next = NULL;
//	}
//	else
//	{
//		Node* s = p->next;
//		p->data = s->data;
//		p->next = s->next;
//		free(s);
//	}
//
//}
//
//int main()
//{
//	Node L;//��������
//	Node* p = &L;
//	Node** pp = &p;
//	InitNode(pp);//��ʼ������
//	PrintNode(pp);//��ӡ����
//	int i, e;
//	i = 1;
//	e = 67;
//	InsertNode(pp, i, e);//��λ��i��λ�ò���e
//	PrintNode(pp);
//	i = 2, e = 2;
//	InsertNode(pp, i, e);
//
//	i = 2, e = 9;
//	InsertNode(pp, i, e);
//	PrintNode(pp);
//
//	InsertPriorNode(((*pp)->next)->next, 5);//��ָ���ڵ�ǰ����e
//	PrintNode(pp);
//
//	DeleteList(pp, i);//ɾ��λ��i�Ľڵ�
//	PrintNode(pp);
//	DeleteNode(pp,*pp);//ָ���ڵ�ɾ��
//	PrintNode(pp);
//
//	return 0;
//
//}