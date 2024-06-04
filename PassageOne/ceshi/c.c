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
//#define MAX 10//默认最大长度
//typedef struct
//{
//	int* date;   //指向顺序表的指针
//	int len;     //顺序表当前长度
//	int maxlen;  //最大长度
//}SeqList;
//
////初始化顺序表
//void Initlist(SeqList* L)
//{
//	//用malloc函数申请一片连续的空间
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
////扩大顺序表的容量
//void Augmentlist(SeqList* L, int a)
//{
//	//使用malloc实现
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
////打印顺序表
//void PrintList(SeqList* L)
//{
//	for (int i = 0; i < L->len; i++)
//	{
//		printf("%d ", L->date[i]);
//	}
//	printf("\n");
//}
//
////在顺序表中插入一个元素
//void ListInsert(SeqList* L, const int i,const int e)
//{
//	if (i > L->len + 1)
//	{
//		printf("error");
//	}
//	if(L->len == L->maxlen)
//	{
//		Augmentlist(L, 5);//扩大顺序表
//	}
//	for (int j = 0; j < (L->len) - i + 1; j++)
//	{
//		L->date[L->len - j] = L->date[L->len - j - 1];
//	}
//	L->date[i - 1] = e;
//	L->len++;
//}
//
////在顺序表中删除一个元素并返回
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
////顺序表
//int main()
//{
//	SeqList L;//声明一个顺序表
//	Initlist(&L);//初始化顺序表
//
//	for (int i = 0; i < L.maxlen; i++)
//	{
//		L.len++;
//		L.date[i] = i;
//	}
//	PrintList(&L);//打印顺序表
//	ListInsert(&L, 5, 100);//在第五序位插入元素100
//	PrintList(&L);//打印顺序表
//	printf("当前最大容量：%d\n", L.maxlen);
//
//	int i = 6;
//	int a = ListDelete(&L, i);
//	printf("删除了第%d个元素：%d\n", i, a);
//
//	PrintList(&L);//打印顺序表
//	return 0;
//}


////单链表（带头节点）
//#include<stdbool.h>
//#include<stdlib.h>
////定义链表
//typedef struct Node
//{
//	int data;
//	struct Node*next;
//}Node;
//
////初始化链表
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
////打印链表
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
////在位序i处插入 e
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
//	Node L;//创建链表
//	InitNode(&L);//初始化链表
//	PrintNode(&L);//打印链表
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
////单链表（不带头节点）
//#include<stdbool.h>
//#include<stdlib.h>
////定义链表
//typedef struct Node
//{
//	int data;
//	struct Node*next;
//}Node;
//
////初始化链表
//void InitNode(Node** L)
//{
//	(*L) = NULL;
//}
//
////打印链表
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
////在位序i处插入 e
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
////在指定节点前插入e
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
////删除位序i的节点
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
////指定节点删除
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
//	Node L;//创建链表
//	Node* p = &L;
//	Node** pp = &p;
//	InitNode(pp);//初始化链表
//	PrintNode(pp);//打印链表
//	int i, e;
//	i = 1;
//	e = 67;
//	InsertNode(pp, i, e);//在位序i的位置插入e
//	PrintNode(pp);
//	i = 2, e = 2;
//	InsertNode(pp, i, e);
//
//	i = 2, e = 9;
//	InsertNode(pp, i, e);
//	PrintNode(pp);
//
//	InsertPriorNode(((*pp)->next)->next, 5);//在指定节点前插入e
//	PrintNode(pp);
//
//	DeleteList(pp, i);//删除位序i的节点
//	PrintNode(pp);
//	DeleteNode(pp,*pp);//指定节点删除
//	PrintNode(pp);
//
//	return 0;
//
//}