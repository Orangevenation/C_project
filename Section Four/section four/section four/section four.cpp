

#include<iostream>
#include<stdio.h>
using namespace std;



//p109 (二)1.
//#define Size 20
//struct str
//{
//	char ch[Size + 1];
//	int  length;
//};
//bool Initstr(str &st)
//{
//	st.length = 0;
//	return true;
//}
//bool replacech(str &st, char x, char y)
//{
//	int i;
//	for (i = 1; i <= st.length; ++i)
//	{
//		if (st.ch[i] == x)
//		{
//			st.ch[i] = y;
//		}
//	}
//	return true;
//}
//bool copystr(str &str1, char str2[])
//{
//	
//	int i = 0;
//	for (i = 0; str2[i] != '\0'; i++)
//	{
//		if (i > Size )
//		{
//			return false;
//		}
//		str1.ch[i + 1] = str2[i];
//		str1.length++;
//	}
//	return true;
//}
//void printstr(str st)
//{
//	for (int i = 1; i <= st.length; i++)
//	{
//		printf("%c", st.ch[i]);
//	}
//	printf("\n");
//}
//bool reversestr(str &st)
//{
//	if (st.length == 0 || st.length == 1)
//	{
//		return false;
//	}
//	char x;
//	int p = 1, q = st.length;
//	while (p < q)
//	{
//		x = st.ch[p];
//		st.ch[p] = st.ch[q];
//		st.ch[q] = x;
//		++p;
//		--q;
//	}
//	return true;
//}
//bool deletech(str &st, char x)
//{
//	int i = 1,j;
//	for (i = 1; i <= st.length; ++i)
//	{
//		if (st.ch[i] == x)
//		{
//			j = st.length-1;
//			int s = i;
//			while (j)
//			{
//				st.ch[s] = st.ch[s + 1];
//				--j;
//				++s;
//			}
//			--st.length;
//		}
//	}
//	return true;
//}
//int anyposstr(str st1, int pos, str st2)
//{
//	int p = st1.length - pos;
//	if (p < st2.length)
//	{
//		return -1;
//	}
//	
//	int i, j;
//	for ( i = pos; st1.length - i+1 >= st2.length; ++i)
//	{
//		j = 1;
//		while (st1.ch[i] == st2.ch[j]&&(j<=st2.length))
//		{
//			++i;
//			++j;
//		}
//		if (j > st2.length)
//		{
//			return i - j + 1;
//		}
//		else
//		{
//			i = i - j + 1;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	str str1,str2;
//	Initstr(str1);
//	Initstr(str2);
//
//	char ch1 = 'c',ch2='a';
//	char st1[] = "asdcasdccd";
//	char st2[] = "a";
//	copystr(str1, st1);
//	copystr(str2, st2);
//
//	printstr(str1);
//	replacech(str1, ch1, ch2);
//	printstr(str1);
//	reversestr(str1);
//	printstr(str1);
//	deletech(str1, 'd');
//	printstr(str1);
//	int pos = 4;
//	int x = anyposstr(str1, pos, str2);//求str1中任意位置起的子串str2的位置
//	printf("%d \n", x);
//
//	return 0;
//}



////p129  (二)1.  3.  4.
////非零元素移动到数组前端
//bool deletezero(int arr[],int x)
//{
//	
//	int j, tmp=0 ,i = 0;
//	for (j = 0; i < 20;++i)
//	{
//		if (arr[i] == 0&&tmp==0)
//		{
//			j = i;
//			tmp = 1;
//		}
//		if (tmp == 1 && arr[i] != 0)
//		{
//			tmp = arr[i];
//			arr[i] = 0;
//			arr[j] = tmp;
//			tmp = 0;
//			i = j;
//		}
//	}
//	return true;
//}
//void printarr(int arr[],int s)
//{
//	for (int i = 0; i < s; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%\n");
//}
//void sortevenodd(int arr[], int s)
//{
//	int left = 0, right = s - 1;
//	int samephoreleft = 1;
//	int samephoreright = 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0&& samephoreleft==1)
//		{
//			++left;
//
//		}
//		else
//		{
//			samephoreleft = 0;
//		}
//		if (arr[right] % 2 == 1 && samephoreright == 1)
//		{
//			--right;
//		}
//		else
//		{
//			samephoreright = 0;
//		}
//		if (samephoreleft == 0 && samephoreright == 0)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			samephoreleft = 1;
//			samephoreright = 1;
//		}
//
//	}
//
//}
//bool daxiao(int arr[], int s)
//{
//	int t = arr[s-1];
//	int left = 0;
//	int right = s - 1;
//	while (left < right)
//	{
//		while (arr[left] < t&&left<right)
//		{
//			++left;
//		}
//		while (arr[right] > t&&left<right)
//		{
//			--right;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//
//	}
//	arr[left] = t;
//	return true;
//}
//int main()
//{
//	int arr[20] = {1,0,5,0,0,0,6,7,3,5,76,346,0,567,0,56,0,0,4356};
//	deletezero(arr, 19);//1.
//	printarr(arr, 19);
//	sortevenodd(arr,19);//3.
//	printarr(arr, 19);
//	daxiao(arr, 19);//4.
//	printarr(arr, 19);
//	return 0;
//}



//p129.  5.  6.  7.  8.
#define c 4
#define r 4

void max_min(int arr[][c])
{
	int max, min,i,j,x,y,m,n;
	for (j=0, i = 0; i < r;++i)
	{
		max = min = arr[i][0];
		x = i, y = 0;
		m = i, n = 0;
		for (j = 0; j < c; ++j)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
				x = i, y = j;
			}
			if (max < arr[i][j])
			{
				max = arr[i][j];
				m = i, n = j;
			}
			
		}
		int temp=min;
		for (int s = 0; s < r; ++s)
		{
			if (temp > arr[s][y])
			{
				temp = arr[s][y];
				break;
			}
		}
		if (temp == min)
		{
			printf("min:%d  X:%d Y:%d \n", min, x, y);
		}
		 temp = max;
		for (int s = 0; s < r; ++s)
		{
			if (temp < arr[s][n])
			{
				temp = arr[s][n];
				break;
			}
		}
		if (temp == max)
		{
			printf("max:%d  X:%d Y:%d \n", max, m, n);
		}

	}

}
bool sanyuan(int arr[r][c],int B[][3],int x)
{
	int i, j,count=0;
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			if (arr[i][j])
			{
				++count;

			}
		}
	}
	++count;
	if (x < count)
	{
		return false;
	}
	B[0][0] = count - 1;
	B[0][1] = r;
	B[0][2] = c;
	count = 0;
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			if (arr[i][j])
			{
				++count;
				B[count][0] = arr[i][j];
				B[count][1] = i;
				B[count][2] = j;
			}
		}
	}
	return true;
}
void printsanyuan(int B[][3])
{
	int i, j,x=1;
	printf("**********\n");
	for (i = 0; i < B[0][1];++i)
	{
		for (j = 0; j < B[0][2];++j)
		{
			if (i==B[x][1]&&j==B[x][2])
			{
				printf("%-2d ", B[x][0]);
				++x;
				
			}
			else
			{
				printf("%-2d ", 0);
			}
		}
		printf("\n");
	}
}
void find(int x, int B[][3])
{
	
	for (int i = 0; i < B[0][0]; ++i)
	{
		if (B[i + 1][0] == x)
		{
			printf("find  %d (X:%d  Y:%d)\n",x, B[i + 1][1], B[i + 1][2]);
			return;
		}
	}
	printf("no find\n");
}
void sanyuanzhuanzhi(int A[][3], int B[][3])
{
	B[0][0] = A[0][0];
	B[0][1] = A[0][2];
	B[0][2] = A[0][1];
	int k = 1;
	for (int i = 0; i < A[0][0]; ++i)
	{
		for (int j = 1; j <= A[0][0]; ++j)
		{
			if (A[j][2] == i)
			{
				B[k][0] = A[j][0];
				B[k][1] = A[j][2];
				B[k][2] = A[j][1];
				++k;
			}
		}
	}
		
}
void addsanyuan(int A[][3], int B[][3], int C[][3])
{
	int i=0, j=0,count=1;
	C[0][1] = A[0][1];
	C[0][2] = A[0][2];
	while(i<A[0][0]&&j<B[0][0])
	{	
		if (A[i + 1][1] == B[j + 1][1])
		{
			if (A[i + 1][2] < B[j + 1][2])
			{
				C[count][0] = A[i + 1][0];
				C[count][1] = A[i + 1][1];
				C[count][2] = A[i + 1][2];
				++count;
				++i;
			}
			if (A[i + 1][2] > B[j + 1][2]&&(i < A[0][0] && j < B[0][0]))
			{
				C[count][0] = B[j + 1][0];
				C[count][1] = B[j + 1][1];
				C[count][2] = B[j + 1][2];
				++count;
				++j;
			}

			if (A[i + 1][2] == B[j + 1][2] && (i < A[0][0] && j < B[0][0]))
			{
				C[count][0] = A[i + 1][0]+B[j+1][0];
				C[count][1] = A[i + 1][1];
				C[count][2] = A[i + 1][2];
				++count;
				++i;
				++j;
			}
		}
		if (A[i+1][1] < B[j+1][1] && (i < A[0][0] && j < B[0][0]))
		{
			C[count][0] = A[i + 1][0];
			C[count][1] = A[i + 1][1];
			C[count][2] = A[i + 1][2];
			++count;
			++i;
		}
		if (A[i + 1][1] > B[j + 1][1] && (i < A[0][0] && j < B[0][0]))
		{
			C[count][0] = B[j + 1][0];
			C[count][1] = B[j + 1][1];
			C[count][2] = B[j + 1][2];
			++count;
			++j;
		}
	}

	if (i >= A[0][0] && j >= B[0][0])
	{
		return;
	}

	while (i < A[0][0])
	{
		C[count][0] = A[i + 1][0];
		C[count][1] = A[i + 1][1];
		C[count][2] = A[i + 1][2];
		++count;
		++i;
	}
	while (j < B[0][0])
	{
		C[count][0] = B[j + 1][0];
		C[count][1] = B[j + 1][1];
		C[count][2] = B[j + 1][2];
		++count;
		++j;
	}
	C[0][0] = count - 1;
	
}
int getvalue(int A[][3],int x,int y)
{
	int i = 0;
	while (i < A[0][0])
	{
		if (A[i + 1][1] == x && A[i + 1][2] == y)
		{
			return A[i + 1][0];
		}
		else ++i;
	}
	return 0;
}
void mulsanyuan(int A[][3], int B[][3], int C[][3])
{
	if (A[0][2] != B[0][1])
	{
		return;
	}
	C[0][1] = A[0][1];
	C[0][2] = B[0][2];
	int i, j,count=1;
	for (i = 0; i < A[0][1];++i)
	{
		for (j = 0; j < B[0][2]; ++j)
		{
			int k=0;
			int add = 0;
			while (k<B[0][1])
			{
				add = add + getvalue(A, i, k) * getvalue(B, k, j);
				++k;
			}
			if (add != 0)
			{
				C[count][0] = add;
				C[count][1] = i;
				C[count][2] = j;
				++count;
			}
		}
	}
	C[0][0] = --count;
}
int main()
{
	int arr[r][c] = { 20,11,3,6,14,2,5,13,9,12,-1,99,16,4,7,15 };
	max_min(arr);//5.
	int A[r][c] = { 0,0,4,0,0,5,0,0,0,0,2,0,8,0,0,3 };
	int B[10][3] = { 0 };
	sanyuan(A,B,10);//6.
	printsanyuan(B);//6.
	find(4, B);//6.2
	int C[10][3] = { 0 };
	sanyuanzhuanzhi(B, C);//7.
	printsanyuan(C);//7.

	int ADD[20][3] = { 0 };
	addsanyuan(C,B,ADD);//8.
	printsanyuan(ADD);//8.
	int pro[20][3] = { 0 };
	mulsanyuan(B, C, pro);//9.
	printsanyuan(pro);//9.


	return 0;
}

