#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



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
//	Node*s = malloc(sizeof(Node));
//	if (s == NULL)
//	{
//		perror("IninNode");
//		return 1;
//	}
//	L->next = s;
//	L->next = NULL;
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
//bool DeleteList(Node* p, int i)
//{
//	Node* L = p;
//	int j = 0;
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
//bool DeleteNode(Node* L,Node*p)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	else if (p->next == NULL)
//	{
//		Node* q;
//		for ( q = L; (q->next) != p; q = q->next)
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
//}
//
////��λ�����
//Node* GrtElem(Node* L, int a)
//{
//	if (a == 0)
//	{
//		return NULL;
//	}
//	int j=0;
//	while (L != NULL && (j != a))
//	{
//		L = L->next;
//		j++;
//	}
//	return L;
//}
//
////��ֵ����
//Node* LocateElem(Node*L, int a)
//{
//	L = L->next;
//	while (L!=NULL&&(L->data!=a))
//	{
//		L = L->next;
//	}
//	return L;
//}
//
////������
//int Lengh(Node* L)
//{
//	L = L->next;
//	int i = 0;
//	for (i = 0; L != NULL; i++)
//	{
//		L = L->next;
//	}
//	return i;
//}
//
//
//int main()
//{
//	Node L;//��������
//	InitNode(&L);//��ʼ������
//	PrintNode(&L);//��ӡ����
//	int i, e;
//	i = 1;e = 67;
//	InsertNode(&L, i, e);
//	i = 2; e = 7;
//	InsertNode(&L, i, e);//��i��λ�ò���e
//	i = 2; e = 2;
//	InsertNode(&L, i, e);
//	i = 2; e = 4;
//	InsertNode(&L, i, e);
//	i = 2; e = 3;
//	InsertNode(&L, i, e);
//	i = 2; e = 1;
//	InsertNode(&L, i, e);
//	PrintNode(&L);
//	InsertPriorNode(((&L)->next)->next, 5);//��ָ���ڵ�ǰ����
//	PrintNode(&L);
//	DeleteList(&L, 3);//ɾ��λ��i�Ľڵ�
//	PrintNode(&L);
//	DeleteNode(&L, ((&L)->next));//ָ���ڵ�ɾ��
//	PrintNode(&L);
//	Node* a=GrtElem(&L, 3);//��λ�����
//	if (a != NULL)
//	{
//		printf("%d\n", a->data);
//	}
//	a = LocateElem(&L, 1);//��ֵ����
//	if (a != NULL)
//	{
//		printf("%d\n", a->data);
//	}
//	int l = Lengh(&L);//������
//	printf("%d\n", l);
//	return 0;
//}





////������Ľ���
//#include<stdlib.h>
//
////��������
//typedef struct Node
//{
//	int data;
//	struct Node*next;
//}Node;
////β�巨����
//void List_TailIinsert(Node* L,int i)
//{
//	Node* p;
//	for (int a = 0; a < i; a++)
//	{
//		Node* s = malloc(sizeof(Node));
//		if (s == NULL)
//		{
//			perror("List_Taillinsert");
//
//		}
//		s->data = a + 1;
//		L->next = s;
//		L = s;
//	}
//	L->next = NULL;
//
//}
//
////ͷ�巨����
//void List_Headinsert(Node* L, int i)
//{
//	L->next = NULL;
//	for (int a = 0; a < i; a++)
//	{
//		Node* s = malloc(sizeof(Node));
//		if (s == NULL)
//		{
//			perror("List_Headinsert");
//		}
//		s->data = a + 1;
//		s->next = L->next;
//		L->next = s;
//	}
//}
//
////��������
//void ReverseNode(Node* L)
//{
//	Node* T = L->next;
//	Node* W = T;
//	L->next = NULL;
//	while (W != NULL)
//	{
//		Node* s = malloc(sizeof(Node));
//		s->data = W->data;
//		s->next = L->next;
//		L->next = s;
//		s = W;
//		W = W->next;
//		free(s);
//	}
//}
//
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
//int main()
//{
//	Node L;
//	List_TailIinsert(&L,10);
//	List_Headinsert(&L, 10);
//	PrintNode(&L);
//	ReverseNode(&L);
//	PrintNode(&L);
//	return 0;
//}





////˫����
//#include<stdlib.h>
//#include<stdbool.h>
////����˫����
//
//typedef struct DNode
//{
//	int data;
//	struct DNode* next;
//	struct DNode* prior;
//}DNode;
//
////��ӡ����
//void PrintDNode(DNode* L)
//{
//	DNode* p = L;
//	p = p->next;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//
////��ʼ��˫����
//void InitDNode(DNode* L)
//{
//	L->prior = NULL;
//	L->next = NULL;
//	for (int i = 0; i < 10; i++)
//	{
//		DNode* s = (DNode*)malloc(sizeof(DNode));
//		s->data = i + 1;
//		s->next = L->next;
//		s->prior = L;
//		if (L->next != NULL)
//		{
//			L->next->prior = s;
//		}
//		L->next = s;
//	}
//}
//
////ָ��λ����
//bool InsertNextDNode(DNode* L, int i,int e)
//{
//	if (i < 1)
//	{
//		return false;
//	}
//	int a = 0;
//	while ((L != NULL)&&(a<i))
//	{
//		a++;
//		L = L->next;
//	}
//	if (L == NULL)
//	{
//		return false;
//	}
//	DNode* s = malloc(sizeof(DNode));
//	if (s == NULL)
//	{
//		return false;
//	}
//	s->data = e;
//	s->next = L->next;
//	s->prior = L;
//	if (L->next != NULL)
//	{
//		L->next->prior = s;
//	}
//	L->next = s;
//	return true;
//}
//
////ɾ��ָ��λ���Ľڵ�
//bool DeleteNextDNode(DNode* L,int i)
//{
//	if (i < 0)
//	{
//		return false;
//	}
//	int a = 0;
//	while ((L != NULL) && (a < i))
//	{
//		a++;
//		L = L->next;
//	}
//	if (L->next == NULL)
//	{
//		return false;
//	}
//	DNode* q = L->next;
//	L->next = q->next;
//	if (q->next != NULL)
//	{
//		q->next->prior = L;
//	}
//	free(q);
//	return true;
//}
//int main()
//{
//	DNode L;
//	InitDNode(&L);
//	PrintDNode(&L);
//	InsertNextDNode(&L, 3, 100);
//	PrintDNode(&L);
//	DeleteNextDNode(&L, 0);
//	PrintDNode(&L);
//	return 0;
//}



////ѭ��������
//#include<stdlib.h>
//#include<stdbool.h>
//
////��������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
////��ʼ������
//bool InitList(Node* L)
//{
//	L->next = L;
//	for (int i = 0; i < 10; i++)
//	{
//		Node* s = malloc(sizeof(Node));
//		if (s == NULL)
//		{
//			perror("InitList");
//			return false;
//		}
//		s->data = i + 1;
//		s->next = L->next;
//		L->next = s;
//	}
//	return true;
//}
//
//void PrintList(Node*L)
//{
//	Node* p = L;
//	while (L->next != p)
//	{
//		L = L->next;
//		printf("%d ", L->data);
//	}
//	printf("\n");
//}
//int main()
//{
//	Node L;
//	InitList(&L);
//	PrintList(&L);
//
//	return 0;
//}




//
////ѭ��˫����
//#include<stdlib.h>
//#include<stdbool.h>
////����˫����
//
//typedef struct DNode
//{
//	int data;
//	struct DNode* next;
//	struct DNode* prior;
//}DNode;
//
////��ʼ������
//bool InitList(DNode* L)
//{
//	L->next = L;
//	L->prior = L;
//	for (int i = 0; i < 3; i++)
//	{
//		DNode* s = malloc(sizeof(DNode));
//		if (s == NULL)
//		{
//			perror("InitList");
//			return false;
//		}
//		s->data = i + 1;
//		s->next = L->next;
//		s->prior = L->next->prior;
//		L->next->prior = s;
//		L->next = s;
//	}
//	return true;
//}
//
////��ӡ����
//void PrintList(DNode*L)
//{
//	DNode* p = L;
//	while (L->next != p)
//	{
//		L = L->next;
//		printf("%d ", L->data);
//	}
//	printf("\n");
//}
//bool DeleteDNode(DNode* L,int i)
//{
//	if (i < 1)
//	{
//		return false;
//	}
//	DNode* p = L->next;
//	int j = 1;
//	while ((j < i) &&(p!=L))
//	{
//		j++;
//		p = p->next;
//	}
//	if (p == L)
//	{
//		return false;
//	}
//	DNode* s = p;
//	p->next->prior = p->prior;
//	p->prior->next = p->next;
//	free(p);
//	return true;
//
//}
//
//int main()
//{
//	DNode L;
//	InitList(&L);
//	PrintList(&L);
//	DeleteDNode(&L, 2);
//	PrintList(&L);
//	return 0;
//}




//
////��̬����
//#include<stdbool.h>
//#include<stdlib.h>
//#define MAXSIZE 10
//struct List
//{
//	int data;
//	int next;
//};
//typedef struct List SLinkList[MAXSIZE];
//
////��ʼ������
//void InitList(SLinkList* L)
//{
//
//	for (int i = 0; i < MAXSIZE; i++)
//	{
//		(*L+i)->next = -2;//-2��������Ϊ��
//	}
//	L[0]->next = -1;//-1����β���
//}
//
////��������
//bool InsertList(SLinkList* L,int s,int d)
//{
//	int j = 0;
//	int p = 0;
//	while (j<s-1)
//	{
//		p = (*L+p)->next;
//		j++;
//	}
//	int i = 0;
//	for (i = 0; (*L + i)->next !=-2; i++)
//	{
//		;
//	}
//	if (i == MAXSIZE)
//	{
//		return false;
//	}
//	(*L + i)->data = d;
//	(*L + i)->next = (*L + p)->next;
//	(*L + p)->next = i;
//	return true;
//}
//
////��ӡ����
//void PrintList(SLinkList* L)
//{
//	int i = 0;
//	for ( i = ((*L + i)->next); i != -1;i= ((*L + i)->next))
//	{
//		printf("%d ", (*L + i)->data);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	SLinkList a;
//	InitList(&a);
//	InsertList(&a,1,5);
//	InsertList(&a,1,4);
//	InsertList(&a,1,3);
//	InsertList(&a,1,2);
//	InsertList(&a,1,1);
//	PrintList(&a);
//	InsertList(&a,2,9);
//	PrintList(&a);
//	return 0;
//}