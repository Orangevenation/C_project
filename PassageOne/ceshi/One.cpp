//#include <iostream>
//#include<stdio.h>

//using namespace std;
//void test(int &x)
//{
//	x = 1024;
//
//}
//int main()
//{
//	int x = 1;
//	test(x);
//	printf("%d", x);
//	cout << '\n'<<x;
//	return 0;
//}

//#include<stdio.h>
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
//
//	int* p = (int*)realloc(L->date, sizeof(int) * (L->maxlen + a));
//	if (p == NULL)
//	{
//		perror("Augmentlist");
//	}
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
//void ListInsert(SeqList* L, const int i, const int e)
//{
//	if ((i > L->len + 1) || (L->len == L->maxlen))
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
//	Augmentlist(&L, 6);//扩大顺序表
//	printf("当前最大容量：%d\n", L.maxlen);
//	PrintList(&L);//打印顺序表
//	return 0;
//}

////双链表
//#include<stdlib.h>
//#include<stdio.h>
////定义双链表
//typedef struct DNode
//{
//	int data;
//	DNode* next;
//	DNode* prior;
//}DNode;
//
////打印链表
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
////初始化双链表
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
//
//
//}
//
//int main()
//{
//	DNode L;
//	InitDNode(&L);
//	PrintDNode(&L);
//	return 0;
//}
 


//p35
//#include <iostream>
//#include<stdio.h>
//
//using namespace std;
//#define M 6
//#define N 9
//#define MAXLEN M+N
//typedef struct Lnode
//{
//	int data[MAXLEN];
//	int len;
//}Node;
//
//void InitNode(Node &A)
//{
//	int i = 0;
//	A.len = 0;
//	for (i = 0; i < M; i++)
//	{
//		A.data[i] = i + 1;
//		(A.len)++;
//	}
//	for ( i=i; i < M + N; i++)
//	{
//		A.data[i] = i - 3;
//		(A.len)++;
//	}
//}
//
//void PrintNode(Node A)
//{
//	for (int i = 0; i < A.len; i++)
//	{
//		printf("%d ", A.data[i]);
//	}
//	printf("\n");
//
//}
//
//void AdjustNode(Node& A)
//{
//	int temp = 0;
//	int i;
//	for (i = M; i < N+M; i++)
//	{
//		temp = A.data[i];
//		int j;
//		for (j = i-1;j>=0 && temp < A.data[j]; j--)
//		{
//			A.data[j + 1] = A.data[j];
//		}
//		A.data[j + 1] = temp;
//		
//	}
//}
//
//int main()
//{
//	Node A;
//	InitNode(A);
//	PrintNode(A);
//	AdjustNode(A);
//	PrintNode(A);
//	return 0;
//}




////p36   2 
//#include<iostream>
//#include<stdio.h>
//#define M 7
//#define N 5
//typedef struct LinkNode
//{
//	int data;
//	struct LinkNode* next;
//}LNode;
//
//void InitLNode(LNode &A,LNode &B)
//{
//	A.next = NULL;
//	LNode* a = &A;
//	B.next = NULL;
//	LNode* b = &B;
//	
//	int i = 0;
//	for (i = 0; i < M; i++)
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = i;
//		s->next = a->next;
//		a->next = s;
//		a = a->next;
//	}
//	for (i = 0; i < N; i++)
//	{
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = i+3;
//		s->next = b->next;
//		b->next = s;
//		b = b->next;
//	}
//}
//void PrintNode(LNode L)
//{
//	LNode* a = L.next;
//	for (LNode* a = L.next; a != NULL; a = a->next)
//	{
//		printf("%d ", a->data);
//	}
//	printf("\n");
//}
//void ceshi(LNode& A, LNode B)
//{
//	int i, j;
//	LNode* a;
//	LNode* b = B.next;
//	for (i = 0; i < N && b!=NULL; i++)
//	{
//		int temp = b->data;
//		b = b->next;
//		for (a=&A; a->next!=NULL ; a=a->next)
//		{
//			if (temp == a->next->data)
//			{
//				LNode* s = a->next;
//				a->next = s->next;
//				free(s);
//			}
//			if (a->next == NULL)
//			{
//				break;
//			}
//		}
//	}
//}
//
//void ceshi2(LNode &A, LNode B)
//{
//	LNode* a = A.next;
//	LNode* b = B.next;
//	LNode* p = &A;
//	while (a != NULL && b != NULL)
//	{
//		if (a->data > b->data)
//		{
//			b = b->next;
//		}
//		else if(a->data < b->data)
//		{
//			p = a;
//			a = a->next;
//		}
//		else 
//		{
//			p->next = a->next;
//			free(a);
//			a = p->next;
//		}
//	}
//}
//int main()
//{
//	LNode A, B;
//	InitLNode(A,B);
//	PrintNode(A);
//	PrintNode(B);
//	//ceshi(A, B);
//	ceshi2(A, B);
//	PrintNode(A);
//	PrintNode(B);
//	return 0;
//}



////p 40  1,(3)
//#include<iostream>
//#include<stdio.h>
//#define M 6
//
//void reverse(int A[],int L)
//{
//	int i = 0;
//	int temp;
//	while (i<L)
//	{
//		temp = A[i];
//		A[i] = A[L-1];
//		A[L-1] = temp;
//		L--;
//		i++;
//	}
//}
//void PrintA(int A[],int L)
//{
//	for (int i = 0; i < L; i++)
//	{
//		printf("%d ", A[i]);
//	}
//}
//
//int main()
//{
//	int A[M] = { 2,3,1,4,5 };
//	reverse(A,5);
//	PrintA(A,5);
//
//	return 0;
//}


////p40,1.(4) (5)
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//#define MAX 10
//typedef struct LNode
//{
//	int data[MAX];
//	int len;
//}LNode;
//void PrintNode(LNode L)
//{
//	for (int i = 0; i < L.len; i++)
//	{
//		printf("%d ", L.data[i]);
//	}
//	printf("\n");
//}
//void DeleteNode(LNode &L,int i,int j)
//{
//	for (int s = 0; s < L.len-j - 1; s++)
//	{
//		L.data[i + s] = L.data[j + s + 1];
//	}
//	L.len = L.len-j + i - 1;
//
//}
//void OrderNode(LNode &L)
//{
//	int temp = L.data[0];
//	int p = 0;
//	int q = L.len-1;
//	while (p < q)
//	{
//		if (L.data[q] > temp)
//		{
//			q--;
//		}
//		else if(L.data[q]<temp)
//		{
//			L.data[p] = L.data[q];
//			L.data[q] = temp;
//			p++;
//		}
//		if (L.data[p] < temp)
//		{
//			p++;
//		}
//		else if (L.data[p] > temp)
//		{
//			L.data[q] = L.data[p];
//			L.data[p] = temp;
//			q--;
//		}
//	}
//}
//int main()
//{
//	LNode L;
//	L.len = 0;
//	int arr[] = { 5,3,8,7,1,4,9,2,6 };
//	for (int i = 0; i < 9; i++)
//	{
//		L.data[i] = arr[i];
//		L.len++;
//	}
//	PrintNode(L);
//	//DeleteNode(L, 1, 2);
//	OrderNode(L);
//	PrintNode(L);
//	return 0;
//}


////p40,(6),(7),(8),(9)
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode;
//
//void InitLNode(LNode* L)
//{
//	LNode* p = L;
//	int j;
//	for (int i = 0; i < 17; i++)
//	{
//		switch (i)
//		{
//		case 0:
//			j = 1;
//			break;
//		case 2:
//			j = 2;
//			break;
//		case 5:
//			j = 3;
//			break;
//		case 8:
//			j = 4;
//			break;
//		case 10:
//			j = 5;
//			break;
//		case 11:
//			j = 6;
//			break;
//		case 12:
//			j = 7;
//			break;
//		case 14:
//			j = 1;
//			break;
//		};
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = j;
//		s->next = p->next;
//		p->next = s;
//		p = s;
//	}
//}
//void PrintLNode(LNode* L)
//{
//	for (LNode* p = L->next; p != NULL; p = p->next)
//	{
//		printf("%d ", p->data);
//	}
//	printf("\n");
//}
//void DeleteRepeat(LNode* L)
//{
//	LNode* p = L->next;
//	LNode* r= NULL;
//	while (p != NULL)
//	{
//		while (p->next != NULL && p->data == (p->next->data))
//		{
//			r = p->next;
//			p->next = r->next;
//			free(r);
//			r = NULL;
//		}
//		p = p->next;
//	}
//}
//void DeleteMin(LNode* L)
//{
//	int min;
//	LNode* s = L;
//	LNode* del=NULL;
//	del = L;
//	for (min = s->next->data; s->next != NULL; s = s->next)
//	{
//		if (s->next->data < min)
//		{
//			min = s->next->data;
//			del = s;
//		}
//
//	}
//	s = del->next;
//	del->next = s->next;
//	free(s);
//	
//}
//void ReverseLNode(LNode* L)
//{
//	LNode* p = L;
//	LNode* s=L->next;
//	LNode* n;
//	L->next = NULL;
//	while (s != NULL)
//	{
//		n = s->next;
//		s->next = p->next;
//		p->next = s;
//		s = n;
//	}
//}
//LNode* SplitParity(LNode* L)
//{
//	LNode* A = L;
//	LNode* B=(LNode*)malloc(sizeof(LNode));
//	LNode* b;
//	B->next = NULL;
//	b = B;
//	LNode* p = L;
//	LNode* q;
//	while (p != NULL&&p->next!=NULL)
//	{
//		if ((p->next->data) % 2 == 0)
//		{
//			q = p->next;
//			p->next = q->next;
//			q->next = b->next;
//			b->next = q;
//			b = q;
//		}
//
//
//		p = p->next;
//	}
//		
//	return B;
//}
//
//int RevFinf(LNode* L,int k)
//{
//	LNode* s=L;
//	LNode* p = L;
//	for (int i = 0; p != NULL; p = p->next)
//	{
//		i++;
//		if (i > k)
//		{
//			s = s->next;
//		}
//		
//	}
//	return s->data;
//
//}
//int main()
//{
//	LNode L;
//	L.next = NULL;
//	InitLNode(&L);
//	PrintLNode(&L);
//	DeleteRepeat(&L); 
//	PrintLNode(&L);
//	DeleteMin(&L);
//	PrintLNode(&L);
//	//DeleteMin(&L);
//	//PrintLNode(&L);
//	//ReverseLNode(&L);
//	//PrintLNode(&L);
//	//LNode*s=SplitParity(&L);
//	//PrintLNode(&L);
//	//PrintLNode(s);
//	int a = RevFinf(&L,3);
//	PrintLNode(&L);
//	printf("%d ", a);
//	return 0;
//}
//



//P42,3.
#include<iostream>
#include<stdio.h>
using namespace std;

int jugde(int arr[],int k)
{
	int temp = arr[0];
	int count = 0;
	int i = 0;
	for ( i = 0; i < k; i++)
	{
		if (arr[i] == temp)
		{
			count++;
		}
		else
		{
			count--;
		}
		if (count == 0)
		{
			temp = arr[i + 1];
		}
	} 
	count = 0;
	for (i = 0; i < k; i++)
	{
		if (arr[i] == temp)
		{
			count++;
		}
	}
	if (count > (k / 2))
	{
		return 1;
	}
	else
		return -1;
}
void print(int arr[],int k)
{
	for (int i = 0; i<k ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1,5,6,6,3,6,5,6,2 };
	print(arr,10);
	int a=jugde(arr,9);
	print(arr,10);
	printf("%d ", a);
}