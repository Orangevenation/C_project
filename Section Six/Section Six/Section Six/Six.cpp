#include <stdio.h>
#include<iostream>
using namespace std;



/*
#define MAXsize 30
typedef struct BTNode
{
	char data;
	struct BTNode* lchild;
	struct BTNode* rchild;
}BTNode;
void inittree(BTNode* p)
{
	p->data = 'A';
	BTNode* lt = p;
	BTNode* rt = p;
	char arr[20] = { 'B','C','D','E','F','G','H','I','J' };
	
	
	BTNode* s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[0];
	p->lchild = s;
	lt = s;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[1];
	p->rchild = s;
	rt = s;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[2];
	lt->lchild = s;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[3];
	lt->rchild = s;
	s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[4];
	rt->lchild = s;
	s->lchild = s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[5];
	rt->rchild = s;
	s->lchild = s->rchild = NULL;

	rt = lt->rchild;
	lt = lt->lchild;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[6];
	lt->lchild = s;
	s->lchild = s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[7];
	lt->rchild = s;
	s->lchild = s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[8];
	rt->lchild = s;
	s->lchild = s->rchild = NULL;

}
void visit(BTNode* p)
{
	printf("%c ", p->data);
}
void preorder(BTNode* p)
{
	if (p != NULL)
	{
		visit(p);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void inorder(BTNode* p)
{
	if (p != NULL)
	{
		inorder(p->lchild);
		visit(p);
		inorder(p->rchild);
	}
}
void postorder(BTNode* p)
{
	if (p != NULL)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		visit(p);
	}
}
int getdepth(BTNode* p)
{
	int ld = 0, rd = 0;
	if (p == NULL)
	{

		return 0;
	}
	else
	{
		ld = getdepth(p->lchild) + 1;
		rd = getdepth(p->rchild) + 1;
	}
	return ld > rd ? ld : rd;

}
void search(BTNode* p, char key,BTNode*&q)
{
	if (p != NULL)
	{
		if (p->data == key)
		{
			q = p;
		}
		else
		{
			search(p->lchild, key, q);
			search(p->rchild, key, q);
		}
	}

}

void level(BTNode* p)
{
	BTNode* arr[MAXsize];
	int front=0, rear=0;
	if(p != NULL)
	{
		arr[rear] = p;
		rear = (rear + 1) % MAXsize;
	}
	while (front != rear)
	{
		visit(arr[front]);
		if (arr[front]->lchild != NULL)
		{
			arr[rear] = arr[front]->lchild;
			rear = (rear + 1) % MAXsize;
		}
		if (arr[front]->rchild != NULL)
		{
			arr[rear] = arr[front]->rchild;
			rear = (rear + 1) % MAXsize;
		}
		front = (front + 1) % MAXsize;
	}
}
void preorderNonrecursion(BTNode* p)
{
	if (p == NULL)
	{
		return;
	}
	BTNode* stack[MAXsize];
	int top = -1;
	stack[++top] = p;
	BTNode* s=NULL;

	while (top != -1)
	{
		visit(stack[top]);
		s = stack[top--];
		if (s->rchild != NULL)
		{
			stack[++top] = s->rchild;
		}
		if (s->lchild != NULL)
		{
			stack[++top] = s->lchild;
		}
	}
}
void inorderNonrecursion(BTNode* p)
{
	if (p == NULL)
	{
		return;
	}
	BTNode* stack[MAXsize];
	int top = -1;
	BTNode* s=p;

	while (top != -1||s!=NULL)
	{
		while (s!= NULL)
		{
			stack[++top] = s;
			s = s->lchild;
		}
		if (top!=-1)
		{
			visit(stack[top]);
			s = stack[top--]->rchild;
		}
	}
}
void postorderNonrecusion(BTNode* p)
{
	
	if (p == NULL)
	{
		return;
	}
	BTNode* stack1[MAXsize];
	BTNode* stack2[MAXsize];
	int top1 = -1;
	int top2 = -1;
	stack1[++top1] = p;
	BTNode* s=NULL;

	while (top1 != -1)
	{
		
		s = stack1[top1--];
		stack2[++top2]=s;
		if (s->lchild != NULL)
		{
			stack1[++top1] = s->lchild;
		}
		if (s->rchild != NULL)
		{
			stack1[++top1] = s->rchild;
		}
	}
	while (top2 != -1)
	{
		visit(stack2[top2--]);
	}
}
int main()
{
	BTNode Tree;
	inittree(&Tree);
	preorder(&Tree);//先序遍历
	printf("\n");
	inorder(&Tree);//中序遍历
	printf("\n");
	postorder(&Tree);//后序遍历
	printf("\n");
	int dep = getdepth(&Tree);//二叉树的深度
	printf("%d \n", dep);
	char key = 'G';
	BTNode* q;
	search(&Tree,key,q);//查找二叉树中的指定元素
	printf("%c \n", q->data);

	level(&Tree);//二叉树的层次遍历
	printf("\n");
	preorderNonrecursion(&Tree);//先序遍历非递归算法
	cout << endl;
	inorderNonrecursion(&Tree);//中序遍历非递归算法
	cout << endl;
	postorderNonrecusion(&Tree);//后序遍历非递归算法
	cout << endl;
	return 0;
}
*/


typedef struct BTNode
{
	char data;
	int ltag;
	int rtag;
	struct BTNode* parent;
	struct BTNode* lchild;
	struct BTNode* rchild;
}BTNode;
void inittree(BTNode* p)
{
	p->data = 'A';
	p->ltag = p->rtag = 0;
	BTNode* lt = p;
	BTNode* rt = p;
	char arr[20] = { 'B','C','D','E','F','G','H','I','J' };


	BTNode* s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[0];
	s->ltag = s->rtag = 0;
	p->lchild = s;
	lt = s;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[1];
	s->ltag = s->rtag = 0;
	p->rchild = s;
	rt = s;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[2];
	s->ltag = s->rtag = 0;
	lt->lchild = s;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[3];
	s->ltag = s->rtag = 0;
	lt->rchild = s;
	s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[4];
	s->ltag = s->rtag = 0;
	rt->lchild = s;
	s->lchild = s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[5];
	s->ltag = s->rtag = 0;
	rt->rchild = s;
	s->lchild = s->rchild = NULL;

	rt = lt->rchild;
	lt = lt->lchild;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[6];
	s->ltag = s->rtag = 0;
	lt->lchild = s;
	s->lchild = s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[7];
	s->ltag = s->rtag = 0;
	lt->rchild = s;
	s->lchild = s->rchild = NULL;

	s = (BTNode*)malloc(sizeof(BTNode));
	s->data = arr[8];
	s->ltag = s->rtag = 0;
	rt->lchild = s;
	s->lchild = s->rchild = NULL;

}
void visit(BTNode* p)
{
	printf("%c ", p->data);
}

void InThread(BTNode *p,BTNode* &pre)
{
	if (p != NULL)
	{
		InThread(p->lchild, pre);
		if ( p->lchild == NULL)
		{
			p->ltag = 1;
			p->lchild = pre;
		}
		if (pre!=NULL && pre->rchild == NULL)
		{
			pre->rtag = 1;
			pre->rchild = p;
		}
		pre = p;
		InThread(p->rchild, pre);
	}
}
BTNode* First(BTNode* p)
{
	while (p!=NULL&&p->ltag == 0)
	{
		p = p->lchild;
	}
	return p;
}
BTNode* Next(BTNode* p)
{
	if (p->rtag == 0)
	{
		return First(p->rchild);
	}
	else
	{
		return p->rchild;
	}
}
void Inorder(BTNode*p)
{
	for (BTNode* i = First(p); i != NULL; i = Next(i))
	{
		visit(i);
	}
}
void Initpare(BTNode* t, BTNode* par);

void initparent(BTNode* p)
{
	BTNode* s = NULL;
	Initpare(p, s);
}
void Initpare(BTNode* t, BTNode* par)
{
	if (t != NULL)
	{
		t->parent = par;
		par = t;
		if (t->ltag == 0)
		{
			Initpare(t->lchild, par);
		}
		if (t->rtag == 0)
		{
			Initpare(t->rchild, par);
		}

	}

}
void seekparent(BTNode* t)
{
	if (t != NULL)
	{
		visit(t);
		seekparent(t->parent);
	}
}
void allparentroute(BTNode* t)
{
	if (t != NULL)
	{
		seekparent(t);
		printf("\n");

		if (t->ltag == 0)
		{
			allparentroute(t->lchild);
		}
		if (t->rtag == 0)
		{
			allparentroute(t->rchild);
		}
	}

}
int main()
{
	BTNode Tree;
	inittree(&Tree);
	BTNode* pre=NULL;
	InThread(&Tree, pre);//二叉树中序遍历线索化
	BTNode* s = Next(&Tree);//线索二叉树下指定节点的下一个节点
	cout <<s->data<<endl;
	Inorder(&Tree);//线索二叉树下的中序遍历
	cout << endl;
	initparent(&Tree);//p171(5)
	allparentroute(&Tree);//p171(5)

	return 0;
}