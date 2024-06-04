
#include<iostream>
#include<stdio.h>
using namespace std;


//顺序栈
//#define MAXSIZE 10
//typedef struct
//{
//	int data[MAXSIZE];
//	int top;
//}SqStack;

//bool InitStack(SqStack& sq)
//{
//	sq.top = -1;
//	return true;
//}
//bool push(SqStack &sq, int x)
//{
//	if (sq.top == MAXSIZE - 1)
//	{
//		return false;
//	}
//	(sq.top)++;
//	sq.data[sq.top] = x;
//	return true;
//
//}
//void PrintStack(SqStack sq)
//{
//	for (int i = sq.top; i != -1; i--)
//	{
//		printf("%d ", sq.data[i]);
//	}
//	printf("\n");
//}
//bool pop(SqStack &sq, int &s)
//{
//	if (sq.top == -1)
//	{
//		return false;
//	}
//	s = sq.data[sq.top];
//	(sq.top)--;
//	return true;
//}
//int main()
//{
//	SqStack Sq;
//	InitStack(Sq);
//	push(Sq, 1);
//	push(Sq, 2);
//	push(Sq, 3);
//	push(Sq, 4);
//	push(Sq, 5);
//	push(Sq, 6);
//	PrintStack(Sq);
//	int s=0; 
//	pop(Sq, s);
//	printf("%d \n", s);
//	PrintStack(Sq);
//	return 0;
//}


////链栈
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode;
////typedef struct LinkStack
////{
////	LNode* lst;
////}LStack;
//bool InitStack(LNode*& lst)
//{
//	LNode* p = (LNode*)malloc(sizeof(LNode));
//	if (p == NULL)
//	{
//		return false;
//	}
//	lst = p;
//	lst->next = NULL;
//	return true;
//}
//
//
//void printLStack(LNode* lst)
//{
//	LNode* p = lst->next;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//bool push(LNode* &lst,int x)
//{
//	LNode* p = (LNode*)malloc(sizeof(LNode));
//	if (p == NULL)
//	{
//		return false;
//	}
//	p->data = x;
//	p->next = lst->next;
//	lst->next = p;
//	return true;
//}
//bool pop(LNode* &lst,int &x)
//{
//	if (lst->next == NULL)
//	{
//		return false;
//	}
//	LNode* p = lst->next;
//	x = p->data;
//	lst->next = p->next;
//	free(p);
//	return true;
//}
//int main()
//{
//	//LStack LS;
//	LNode* lst;
//	InitStack(lst);
//	push(lst,4);
//	push(lst,3);
//	push(lst,5);
//	push(lst,2);
//	push(lst,6);
//	push(lst,1);
//	printLStack(lst);
//	int x = 0;
//	pop(lst,x);
//	printf("%d \n",x);
//	printLStack(lst);
//	return 0;
//}



//顺序栈的应用
//#define MAXSIZE 15
//int main()
//{
//	char test[10] = { '(','(' ,')','(',')','(','(',')',')','('};
//	char stack[MAXSIZE];
//	int top = -1;
//	for (int i = 0; i < 10; ++i)
//	{
//		if (test[i] == '(')
//		{
//			stack[++top] = '(';
//		}
//		if (test[i] == ')')
//		{
//			if (top == -1)
//			{
//				return false;
//			}
//			else
//				--top;
//		}
//	}
//	if (top == -1)
//		return true;
//	else
//		return false;
//
//
//}



////后缀表达式计算
////p65 例3-2；
//int fig(int a, char op, int b)
//{
//	if (op == '+')
//	{
//		return a + b;
//	}
//	if (op == '-')
//	{
//		return a - b;
//	}
//	if (op == '*')
//	{
//		return a * b;
//	}
//	if (op == '/')
//	{
//		if (b == 0)
//		{
//			perror("ERROR");
//			return false;
//		}
//		return a / b;
//	}
//	return false;
//}
//int cal(char exp[])
//{
//	int a, b;
//	char op;
//	int stack[10] = {0};
//	int top = -1;
//	for (int i = 0; exp[i] != '\0'; ++i)
//	{
//		if (exp[i] >= '0' && exp[i] <= '9')
//		{
//			stack[++top] = exp[i] - '0';
//		}
//		else
//		{
//			op = exp[i];
//			b=stack[top--];
//			a=stack[top--];
//			stack[++top] = fig(a, op, b);
//		}
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	char exp[] = { "423*+2/" };
//
//	int c = cal(exp);
//	printf("%d ", c);
//	return 0;
//}


//无头结点链栈
//struct LNode
//{
//	int data;
//	struct LNode* next;
//};
//bool InitLst(LNode*& lst)
//{
//	lst = NULL;
//	return true;
//}
//void PrintLNode(LNode* lst)
//{
//	while (lst != NULL)
//	{
//		printf("%d ", lst->data);
//		lst = lst->next;
//	}
//	printf("\n");
//}
//bool push(LNode*& lst, int x)
//{
//	LNode* p = (LNode*)malloc(sizeof(LNode));
//	if (p == NULL)
//	{
//		return false;
//	}
//	p->data = x;
//	p->next = lst;
//	lst = p;
//	return true;
//}
//bool pop(LNode* &lst,int &x)
//{
//	if (lst == NULL)
//	{
//		return false;
//	}
//	x = lst->data;
//	LNode* p = lst;
//	lst = p->next;
//	free(p);
//	return true;
//}
//int main()
//{
//	LNode *lst;
//	InitLst(lst);
//	push(lst, 4);
//	push(lst, 2);  
//	push(lst, 1);
//	push(lst, 3);
//	push(lst, 5);
//	PrintLNode(lst);
//	int x = 0;
//	pop(lst,x);
//	printf("%d \n", x);
//	PrintLNode(lst);
//	return 0;
//}


//顺序队列
//#define MAXSIZE 10
//struct queue
//{
//	int data[MAXSIZE];
//	int front;
//	int rear;
//};
//bool InitQu(queue &qu)
//{
//	qu.front = qu.rear = 0;
//	return true;
//}
//bool EnQueue(queue &qu,int x)
//{
//	if ((qu.rear + 1) % MAXSIZE == qu.front)
//	{
//		return false;
//	}
//	qu.rear=((++qu.rear)%MAXSIZE);
//	qu.data[qu.rear] = x;
//	return true;
//}
//void PrintQueue(queue qu)
//{
//	while (qu.front != qu.rear)
//	{
//		qu.front = ++qu.front % MAXSIZE;
//		printf("%d ", qu.data[qu.front]);
//	}
//	printf("\n");
//}
//bool DeQueue(queue &qu, int &x)
//{
//	if (qu.front == qu.rear)
//	{
//		return false;
//	}
//	qu.front = ++qu.front % MAXSIZE;
//	x = qu.data[qu.front];
//	return true;
//}
//int main()
//{
//	queue qu;
//	InitQu(qu);
//	EnQueue(qu,9);
//	EnQueue(qu,5);
//	EnQueue(qu,2);
//	EnQueue(qu,3);
//	EnQueue(qu,1);
//	EnQueue(qu,7);
//	PrintQueue(qu);
//	int x;
//	DeQueue(qu, x);
//	printf("%d \n", x);
//	PrintQueue(qu);
//	return 0; 
//}



////链队列
//
//struct LNode
//{
//	int data;
//	struct LNode* next;
//};
//struct LiQueue
//{
//	LNode* front;
//	LNode* rear;
//};
//bool InitLiQueue(LiQueue*& lqu)
//{
//	lqu = (LiQueue*)malloc(sizeof(LiQueue));
//	if (lqu == NULL)
//	{
//		return false;
//	}
//	lqu->front = lqu->rear = NULL;
//	return true;
//}
//bool EnQueue(LiQueue*& lqu, int x)
//{
//	LNode* p = (LNode*)malloc(sizeof(LNode));
//	if (p == NULL)
//	{
//		return false;
//	}
//	p->data = x;
//	if (lqu->rear == NULL)
//	{
//		p->next = NULL;
//		lqu->rear = p;
//		lqu->front = p;
//	}
//	else
//	{
//		p->next = lqu->rear->next;
//		lqu->rear->next = p;
//		lqu->rear = p;
//	}
//	return true;
//}
//void PrintQueue(LiQueue* lqu)
//{
//	LNode* p = lqu->front;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//bool DeQueue(LiQueue*& lqu,int &x)
//{
//	if (lqu->front == NULL)
//	{
//		return false;
//	}
//	LNode* p = lqu->front;
//	x = p->data;
//	if (p->next == NULL)
//	{
//		lqu->front = lqu->rear = NULL;
//	}
//	else
//	{
//		lqu->front = p->next;
//	}
//	free(p);
//	return true;
//}
//int main()
//{
//	LiQueue *lqu;
//	InitLiQueue(lqu);
//	EnQueue(lqu, 4);
//	EnQueue(lqu, 5);
//	EnQueue(lqu, 2);
//	EnQueue(lqu, 1);
//	EnQueue(lqu, 0);
//	EnQueue(lqu, 9);
//	PrintQueue(lqu);
//	int x = 0;
//	DeQueue(lqu, x);
//	printf("%d \n", x);
//	PrintQueue(lqu);
//	return 0;
//}



////真题仿造 1
//#define MAX 10
//struct stack
//{
//	int data[MAX];
//	int top0;
//	int top1;
//};
//void InitStack(stack &st)
//{
//	st.top0 = -1;
//	st.top1 = MAX;
//}
//bool push0(stack &st, int x)
//{
//	if ((st.top0+1)== st.top1)
//	{
//		return false;
//	}
//	st.data[++st.top0] = x;
//	return true;
//}
//bool push1(stack &st, int x)
//{
//	if ((st.top1-1)== st.top0)
//	{
//		return false;
//	}
//	st.data[--st.top1] = x;
//	return true;
//}
//bool PrintStack0(stack st)
//{
//	if (st.top0 == -1)
//	{
//		return false;
//	}
//	for (int i = st.top0; i != -1; --i)
//	{
//		printf("%d ", st.data[i]);
//	}
//	printf("\n");
//	return true;
//}
//bool PrintStack1(stack st)
//{
//	if (st.top1 == MAX)
//	{
//		return false;
//	}
//	for (int i = st.top1; i != MAX; ++i)
//	{
//		printf("%d ", st.data[i]);
//	}
//	printf("\n");
//	return true;
//}
//bool pop0(stack& st, int& x)
//{
//	if (st.top0 == -1)
//	{
//		return false;
//	}
//	x = st.data[st.top0--];
//	return true;
//}
//bool pop1(stack& st, int& x)
//{
//	if (st.top1 == MAX)
//	{
//		return false;
//	}
//	x = st.data[st.top1++];
//	return true;
//}
//int main()
//{
//	stack st;
//	InitStack(st);
//	push0(st, 3);
//	push0(st, 8);
//	push1(st, 5);
//	push1(st, 5);
//	int x, y;
//	pop0(st, x);
//	pop0(st, x);
//	PrintStack1(st);
//	PrintStack0(st);
//	printf("%d \n", x);
//	return 0;
//}


////真题仿造 2
//#define MaxSize 10
//struct stack
//{
//	int data[MaxSize];
//	int top;
//};
//struct queue
//{
//	stack st1, st2;
//};
//void InitQueue(queue &qu)
//{
//	qu.st1.top = qu.st2.top = -1;
//}
//void enQueue(queue &qu,int x)
//{
//	if (qu.st1.top == MaxSize)
//	{
//		return;
//	}
//	qu.st1.data[++qu.st1.top] = x;
//	
//}
//void deQueue(queue &qu, int &x)
//{
//	if (qu.st1.top == -1)
//	{
//		return;
//	}
//	while (qu.st1.top != -1)
//	{
//		qu.st2.data[++qu.st2.top] = qu.st1.data[qu.st1.top--];
//		
//	}
//	x = qu.st2.data[qu.st2.top--];
//	while (qu.st2.top != -1)
//	{
//		qu.st1.data[++qu.st1.top] = qu.st2.data[qu.st2.top--];
//	
//	}
//}
//int main()
//{
//	queue quNode;
//	InitQueue(quNode);
//
//	enQueue(quNode,6);
//	enQueue(quNode,1);
//	enQueue(quNode,4);
//	enQueue(quNode,2);
//	int x;
//	deQueue(quNode, x);
//	printf("%d ",x);
//	return 0;
//}



////p82.(8)
//#define MAXsize 10
//struct queue
//{
//	int front, rear;
//	int data[MAXsize];
//	int tag;//0为空  1为不空
//};
//
//bool InitQueue(queue& qu)
//{
//	qu.front = qu.rear = 0;
//	qu.tag = 0;
//	return true;
//}
//bool enqueue(queue& qu, int x)
//{
//	if ((qu.tag == 1)&&(qu.front==qu.rear))
//	{
//		return false;
//	}
//	qu.data[qu.rear] = x;
//	qu.rear = (qu.rear + 1) % MAXsize;
//	qu.tag = 1;
//	
//	return true;
//}
//bool dequeue(queue &qu, int& x)
//{
//	if (qu.tag == 0)
//	{
//		return false;
//	}
//	x = qu.data[qu.front];
//	qu.front = (qu.front + 1) % MAXsize;
//	if (qu.front == qu.rear)
//	{
//		qu.tag = 0;
//	}
//	return true;
//}
//void printqueue(queue qu)
//{
//	while (qu.tag != 0)
//	{
//		printf("%d ", qu.data[qu.front]);
//		qu.front = (qu.front + 1) % MAXsize;
//		if (qu.front == qu.rear)
//		{
//			qu.tag = 0;
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	queue qu;
//	InitQueue(qu);
//	enqueue(qu, 3);
//	enqueue(qu, 5);
//	enqueue(qu, 6);
//	int x;
//	dequeue(qu, x);
//	dequeue(qu, x);
//	dequeue(qu, x);
//	dequeue(qu, x);
//	enqueue(qu, 8);
//	enqueue(qu, 8);
//	enqueue(qu, 2);
//	enqueue(qu, 2);
//	enqueue(qu, 2);
//	enqueue(qu, 8);
//	enqueue(qu, 7);
//	enqueue(qu, 9);
//	enqueue(qu, 0);
//	printqueue(qu);
//	return 0;
//}



////p82  (9)
////将一个十进制数转化为二进制
////法一
////int convert2(int x)
////{
////	if (x == 0)
////	{
////		return 0;
////	}
////	if (x == 1)
////	{
////		return 1;
////	}
////	return (x%2)+(convert2(x/2)*10);
////}
////法二
//#define MAXsize 20
//int con2(int x)
//{
//	int top, i, y;
//	int data[MAXsize];
//	top = -1;
//	i = x;
//	while (i!=0)
//	{
//		y = i % 2;
//		i = i / 2;
//		data[++top] = y;
//	}
//	i = 0;
//	while (top != -1)
//	{
//		i = i*10+data[top--];
//	}
//	return i;
//}
//
//int main()
//{
//	//int x = convert2(6);
//	//printf("%d ", x);
//
//	int s=con2(10);
//	printf("%d ", s);
//	return 0;
//}