#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define a 10
//int main()
//{
//	int arr[a] = { 2, 31 ,12, 3, 12 ,3, 33, 11 ,12, 34 };
//	
//	printf("%d\n", arr[4]);
////	printf("hollow world\n");
////	return 0;
//}
//#include <string.h>
//int main()
//{
//	char sr[] ="abcde";
//	char ssr[] = {'a','b','c','d','e'};
//	//double len1 = strlen(sr);
//	//float len2 = strlen(ssr);
//	//printf( "%lf\n",len1);
//	//printf( "%f\n",len2);
//	printf("%d\n",strlen( sr));
//	printf("%d\n",strlen( ssr));
//	printf("%d\n", strlen("a\112329aa"));
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	int input = 0;
//	printf("要来一起玩吗？？（1/0)");
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("那就一起吧。");
//	}
//	else
//	{
//		printf("滚一边去！！！");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 10000)
//	{
//		line++;
//		printf("学习ing:%d\n", line);
//
//	}
//	if(line==10000)
//	{
//		printf("上岸\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int ADD(int x, int y)
//
//{
//
//	return x+y;
//}
//
//int main()
//{
//
//	int a=0;
//	int b=0;
//	scanf("%d%d", &a, & b);
//	int sum = ADD(a, b);
//	printf( "%d\n",sum);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,2 ,3,45,2,4,3,42,43,8 };
//	char b[5] = {'a','d','c'};//不完全初始化，默认值为0
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",a[i]);
//		i++;
//	}
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	//int a = 9 / 2;
//	//float a = 9 / 2.0;
//	int a = 9 % 2;//"%"取余
//	printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = a << 1;//左移操作符移动的是储存在计算机中的二进制右移操作符同理
//	//&按位与
//	//|按位或
//	//^按位异或
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	printf("%d\n",a);
//	a += 5;//简写
//	printf("%d\n",a);
//
//
//	a = a - 3;
//	printf("%d\n",a);
//	a -= 3;
//	printf("%d\n",a);
//
//
//	a = a % 3;
//	printf("%d\n", a);
//	a %= 3;
//	printf("%d\n", a);
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 5;//0表示假，非0表示真。
//	printf("%d", !a);//!逻辑反操作
//	if (a)
//	{
//		//如果a为真做事
//	}
//	if (!a)
//	{
//		//如果a为假做事
//	}
//	//sizeof是一个操作符
//	//计算类型或者变量的大小
//	//不是函数
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//~按位取法（二进制）把所有二进中的0变为1，1变为0包括符号位
//	//整数在内存中的储存方式是补码
//	//一个整数的二进制表示有三种：原码，反码，补码
//	//例如整数-1
//	// 10000000000000000000000000000001（原码：换算为二进制，最高位为符号位，1为负值，0为正值）
//	// 11111111111111111111111111111110（反码：符号位不变，其余相反）
//	// 11111111111111111111111111111111（补码：反码+1）
//	// 正整数的原码反码补码相同
//	//
//
//	printf("%d", ~a);
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	//前置++先+1后使用
//	int x = 10;
//	int y = x++;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	//后置++先使用后+1
//
//
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14159269798;//强制类型转换
//	printf("%d", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;//&&为逻辑与，一假与为假
//	int d = a || b;//&&为逻辑或，一真或为真
//	printf("%d\n", c); 
//	printf("%d\n", d);
//
//
//	return 0;
//}
//int main()
//{
//	//  ?  :  条件操作符（三字操作符）
//	//exp1 ? exp2 : erp3
//	//如果exp1成立，则exp2计算，整个表达式的结果为：exp2的结果
//	//如果exp1不成立，则exp3计算，整个表达式的结果为：exp3的结果
//	int a = 7;
//	int b = 9;
//	int max = 0;
//	max=a > b ? a : b;
//	printf("%d\n", max);
//	
//
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	int b = 9;
//	int c = 7;//c=2        b=-2       c=2     
//	int d = (c = a + c - b, b = c - a, c = b + a);
//	//逗号表达式从左到右依次计算
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//
//
//	return 0;
//}
//typedef 类型重命名
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 8;
//	u_int b = 8;
//
//
//	return 0;
//}

//static 静态的
//1、修饰全局变量
//2、修饰局部变量
//3、修饰函数

//void test()
//{
//	static int a = 0;//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的储存类型）
//	a++;
//	printf("%d\ ", a);
//
//}
//int main()
//{
//	int i = 0;
//	int c = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int ak;//extern声明外部符号
////static修饰全局变量使得该变量只能在自己的源文件（.c）内使用
////其他源文件不能使用
////全局变量本身在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
////但是被static修饰后就变成了内部链接属性，其他源文件就不能链接这个全局变量
//int main()
//{
//
//	printf("%d\n", ak);
//	return 0;
//}
//extern int add();
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	int sum=add(a, b);//static 修饰函数，该函数只能在自己的源文件内使用，不能再其他源文件内部使用
//	                  //本质上：static使函数的外部来链接属性改变为内部链接属性（和修饰全局变量极度相似）
//	printf(" %d", sum);
// 
//	return 0;
//}
//

//define 是一个预处理指令
//1.定义标识符常量
//#define max 1000
//int main()
//{
//	printf("%d\n", max);
//	return 0;
//}
//2.define定义宏
//#define add(x,y) ((x)+(y))
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%d\n", 9*add(2, 5));
//	             //9*2+5(上面的宏x和y没有括号的结果）
//               //可知宏只做替换
//	return 0;
//}

//int main()
//{
//	int a = 8;//在内存中要分配四个字节
//	printf("%p",&a );//%p专门用来打印地的
//	int* pa = &a; //pa是用来存放地址的，在c语言中pa叫指针变量
//	              //*说明pa是指针变量
//	              //int 说明pa执行的对象是int类型
//	char ch = 'e';
//	char* pc = &ch;
//
//	return 0;
//}

//指针 就是 地址
//int main()
//{
//	int a = 7;
//	int* pa = &a;
//	*pa = 45;//*解引用操作，*pa就是通过pa里面的地址找到a
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(double*));
//	//指针的大小是相同的。指针是用来存放地址的
//	//指针需要多大空间取决于地址的存储需要多大空间
//
//	return 0;
//}

//struct  stu//创建一个学生
//{
//	char name[20];
//	int age;
//	float score;
//
//};
//struct book//创建一本书的类型
//{
//	char name[30];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct stu s1 = { "李四",20,92.5 };//结构体的创建和初始化
//	printf("1:%s %d %f\n", s1.name, s1.age, s1.score);//结构体.成员变量
//	struct stu * ps = &s1; 
//	printf("2:%s %d %f\n",(*ps).name,(*ps).age,(*ps).score);
//
//	printf("3:%s %d %f\n",ps->name,ps->age,ps->score);
//	                    //结构体的指针->成员变量名
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char a[8] = { 'a','b','c' ,'8'};
//	printf("%d\n", strlen(a));
//	return 0;
//}
//
//int max(int x,int y)
//{
//	//if (x > y)
//	//	return x;
//	//else
//	//	return y;
//	return x > y ? x : y;
//}
//int main()
//{ 
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s=max(a, b);
//	printf("max=%d\n", s);
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf_s("%d", & age);
//	if (age < 18) printf("少年");
//	else if (age >= 18 && age < 26)
//		printf("青年");
//	else if (age >= 26 && age < 50)
//		printf("中年");
//	else if (age >= 50 && age < 60)
//		printf("壮年");
//	else if (age >= 60 && age < 100)
//		printf("老年");
//	else  if (age >= 100)
//		printf("老不死（doge）");
//	//else会与最近的if相匹配
//	
//
//		
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a % 2)
//	{
//		printf("奇数");
//	}
//	else
//	{
//		printf("偶数");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i=1;i <= 100;i++)
//	{
//		if (i % 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		if (i == 67)
//			break;//在while循环中，break用于永久终止循环
//		i++;
//	}
//
//	return 0;
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//
//		if (i == 67)
//			continue;//在while循环中continue用于跳过本次循环中continue之后的代码，直接去判断部分，看是否进行下一次循环
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//EOF - end of file - 文件结束标志
//int main()
//{
//	//int ch = getchar(); //getchar获得一个字符
//                        //getchar返回的是字符的ASCII值所以用int整形变量存储
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);//输出一个字符
//	}               //ctrl + z 读取结束
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：\n");
//	scanf("%s", password); //password是一个数组，在这里不需要取地址
//	//printf("请确认密码（Y/S）\n");
//	//清理缓冲区
//	//getchar();//处理\n
//	int wu = 0;
//	while ((wu = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/S）%s\n",password);
//	int ch = getchar();
//	if ((ch == 'Y')|(ch== 'y'))
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}	
//	putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//int main()
//{
//	for (;;)   //判断部分省略，则判断部分恒为真
//	{
//		printf("hehe ");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 1;
//	int mun = 1;
//    int he = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		 mun= mun* i;
//		 he = he + mun;
//	}
//	printf("n的阶乘为%d\n", mun);
//	printf("前n项的阶乘之和%d\n", he);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
//	int k = 23;
//	int mun = sizeof(arr) / sizeof(arr[0]);
//	int z = 0;
//	int y = mun - 1;
//	if (k <= mun)
//	{
//		while (arr[z] <= arr[y])
//		{
//			int mid = (z + y) / 2;
//			if (arr[mid] > k)
//			{
//				y = mid;
//			}
//			else if (arr[mid] < k)
//			{
//				z = mid+1;
//			}
//			else
//			{
//				printf("找到%d", arr[mid]);
//				break;
//			}
//		}
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1 [] = "welcome to beijing!!!!!!";
//	char arr2 [] = "########################";
//	int zuo = 0;
//	int you = strlen(arr1) - 1;
//	while (zuo <= you)
//	{
//	    arr2[zuo] = arr1[zuo];
//		arr2[you] = arr1[you];
//		system("cls");//清空屏幕
//		printf("%s\n", arr2);
//		Sleep(500);//睡眠0.5秒
//		zuo++;
//		you--;
//	}
//
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char pass[20] = "123456789";//假设正确密码为123456
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		char a[20] ;
//		scanf("%s", a);
//		if (strcmp(pass,a)==0)//两个字符串的比较不能直接用==应该使用strcmp
//			                  //strcmp在比较两个字符串相同时返还0
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//		if (i == 2)
//		{
//			printf("错误次数过多，已退出！！！");
//		}
//	
//	}
//
//
//	return 0;
//}



//猜数字游戏
// 
//#include <stdlib.h>
//caidan()
//{
//	printf(" *******************************************\n");
//	printf(" *******************************************\n");
//	printf(" ***********      猜数字    ****************\n");
//	printf(" ***********      1.play    ****************\n");
//	printf(" ***********      2.exit    ****************\n");
//	printf(" *******************************************\n");
//	printf(" *******************************************\n");
//}
//game()
//{
//	//猜数字游戏的构成
//	//1.生成随机数字
//	//2。rand函数返回了一个0-32767之间的数字
//	//时间--时间戳 
//	int k = rand()%100+1;//%100的余数是0--99，然后+1，范围变成1--100
//	printf("%d\n", k);
//	printf("在1--100间猜一个数字是多少\n");
//
//	while (1)
//	{
//		int c = 0;
//		printf("请猜数字：");
//		scanf("%d", &c);
//		if (c < k && c > 0)
//		{
//			printf("你猜小了\n");
//		}
//		else if (c > k && c < 100)
//		{
//			printf("你猜大了\n");
//		}
//		else if (c > 100 || c < 0)
//		{
//			printf("请输入一个0--100的整数\n");
//		}
//		else if (c == k)
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a = 0;
//	do
//	{
//		caidan();//打印菜单
//		printf("请选择");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("没有该选项，请重新选择\n");
//			break;
//		}
//
//
//
//	} while( a!=2);
//	return 0;
//}

//输入三个不同的数，让他们从大到小排序
//int main()
//{
//	static  int  a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int s = 0;
//		s = a;
//		a = b;
//		b = s;
//	}
//	 if (a < c)
//	{
//		 int s = 0;
//		 s = a;
//		 a = c;
//		 c = s;
//	}
//	 if (b < c)
//	{
//		 int s = 0;
//		 s = b;
//		 b = c;
//		 c = s;
//	}
//
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//1-100之间能被三整除的数有哪些
//int main()
//{
//	int i = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
// 
// 判断两个数的最大公约数
// 方法一
//int main()
//{
//	int a = 0, b = 0, min = 0 ;
//	scanf("%d %d", &a, &b);
//	(a< b) ?( min = a) : (min = b);
//	while (a % min != 0 || b % min != 0)
//	{
//		min--;
//	}
//	printf("最大公约数为：%d", min);
//
//	return 0;
//}
// 方法二
//int main()
//{
//	int m = 0 , n = 0 ,  y=0;
//	scanf("%d%d", &m, &n);
//	while (y=m % n)
//	{
//		m = n;
//		n = y;
//	}
//	printf("最大公约数为：%d", n);
//	return 0;
//}


//判断1000-2000中的闰年
//int main()
//{
//	int y = 0;
//	int sum = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0 && y%100 != 0)||(y % 400 == 0))
//		{
//			printf("%d ", y);//判断是不是闰年
//			sum++;
//		}
//		//if (y % 400 == 0)
//		//{
//		//	printf("%d ", y);
//		//	sum++;
//		//}
//	}
//	printf("    %d\n", sum);
//
//	return 0;
//}


//判断100-200之间的素数
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int s = 0;
//		int panduan = 1;
//		for (s = 2;s < i; s++)
//		{
//			if (i % s == 0)
//			{
//				panduan = 0;
//				break;
//			}
//		}
//		if (panduan ==1)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("\n%d", sum);
//
//	return 0;
//}
// 
// 
//int main()
//{
//sat:
//	printf("hehe\n");
//	printf("haha\n");
//	goto sat;
//	return 0;
//}


//关机程序
//只要运行起来就会在一分钟后关机
// 关机
//c语言提供了一个函数system（）-执行系统命令的 

//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 120");
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入“我是猪”，就取消关机");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//goto函数只能在本函数内跳转，不能跨函数
//	}
//
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[20] = "hello world";
//	strcpy(arr1, arr2);//strcpy拷贝arr2中的字符串到arr1中去
//	printf("%s", arr1);
//	return 0;
//}


//int main()
//{
//
//	char  arr[] = "hello world!!!";
//	memset(arr, 'x', 5);//memset 把arr数组中前5个字符替换为x
//	printf("%s", arr);
//
//	return 0;
//}

//函数返回类型写void表示这个函数不会返回任何值，也不需要返回

//void huan2(int x, int y)
//{
//	int z = 0;
//	z = y;
//	y = x;
//	x = z;
//
//}
//void huan(int *pa,int *pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前%d %d\n", a, b);
//	huan(&a, &b);//传址调用
//	huan2(a, b);//传值调用
//	printf("交换后%d %d", a, b);
//	return 0;
//}


//int panduan(int x)
//{
//	int s = 0;
//	for (s = 2; s < x; s++)
//	{
//		if (x % s == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (panduan(i) == 1)
//		{
//			printf("%d\n", i);
//			sum++;
//		}
//	}
//	printf("总数：%d", sum);
//	return 0;
//}



//int runnian(int a)
//{
//	return ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 2000; i <= 3000; i++)
//	{
//		if (runnian(i) == 1)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("\n闰年总数：%d", sum);
//
//	return 0;
//}



//int zhaoshu（int*a[]，。。。。。）
//int zhaoshu(int a[],int i,int ch)
//{
//	int zuo = 0;
//	int you = ch-1;
//	while (zuo<=you)
//	{
//		int mid = (zuo + you) / 2;
//		if (a[mid] > i)
//		{
//			you = mid-1;
//		}
//		else if (a[mid] < i)
//		{
//			zuo = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//		
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组arr传参，实际上传递的不是数组本身
//	//仅仅传过去了数组首元素的地址
//	int i = 1;
//	int ch = sizeof(arr) / sizeof(arr[0]);
//	int s = zhaoshu(arr, i, ch);
//	if (s == -1)
//	{
//		printf("\n找不到\n");
//	}
//	else
//	{
//		printf("\n找到了，下标为：%d\n", s);
//	}
//
//
//	return 0;
//}


//int main()
//{
//
//	printf("%d", printf("%d", printf("%d", 67)));
//	//printf的返回值为打印在屏幕上的字符个数
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 56;
//	//函数的声明--告知编译器有这个函数
//	int add(int, int);
//	printf("%d", add(a, b));
//
//
//	return 0;
//}
////函数的定义
//int add (int x, int y)
//{
//	return (x + y);
//}


//void dayin(unsigned s)
//{
//	if (s > 9)
//	{
//		dayin(s / 10);
//	}
//	printf("%d ", s % 10);
//
//}
//int main()
//{
//	unsigned a;
//	scanf("%d", &a);
//	dayin(a);
//
//
//	return 0;
//}


//#include <string.h>
//int chang(char *arr)
//{
//	int sum=0;
//	while (*arr != '\0')
//	{
//		sum++;
//		arr++;
//	}
//	return sum;
//}
//int chang(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + chang(1 + arr);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "qwerdf";
//	//int a=strlen(arr);
//	printf("%d", chang (&arr));
//	return 0;
//}




//int jiecheng(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * jiecheng(n - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", jiecheng(i));
//	return 0;
//}



//斐波那契数列1，1，2，3，5，8，13，21，34，55.。。。
// 后一个数字等于前两个数字之和
//int sum12(int i)
//{
//	if (i <= 2)
//	{
//		return 1;
//	}
//	else return sum12(i - 1) + sum12(i - 2);
//}
//int sum12(int n)
//{
//	int i = 0;
//	int s = 1;
//	int a = 0;
//	int b = 1;
//	for (i = 1; i <n; i++)
//	{
//		s = a + b;
//		a = b;
//		b = s;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", sum12(n));
//
//	return 0;
//}


//1-100个整数中出现了多少个带有数字9的数
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("\n%d", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int a = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += a*(1.0 / i);
//		a = -a;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 9,6,7,5,2,3,8,8,7,1 };
//	int i = 0;
//	int s = arr[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if ( s < arr[i])
//		{
//			s = arr[i];
//		}
//	}
//	printf("%d", s);
//
//	return 0;
//}


//打印一个9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int x = 1;
//	for (i = 1; i < 10; i++)
//	{
//		
//		for (x = 1; x <= i; x++)
//		{
//			printf("%d*%d=%-2d ", i, x, i * x);
//			             //%d的d前加数字代表打印几位，如果不够两位，用空格填充
//			             //加  -  代表左对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//打印一个任意的乘法口诀表
//void chengfabiao(int a)
//{
//	int i = 0;
//	int x = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (x = 1; x <= i; x++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, x, i * x);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	chengfabiao(i);
//	return 0;
//}



//将一个字符串按原序列倒序排列
//int len(char *a)
//{
//	int sum = 0;
//	while(*a != '\0')
//	{
//		sum++;
//		a++;
//	}
//	return sum;
//}
//void fanzhuanzifu(char *arr)
//{
//	int zuo = 0;
//	int you = len(arr)-1;
//	while (zuo<you)
//	{
//		char s = *(arr+zuo); 
//		*(arr + zuo) = *(arr+you);
//		*(arr + you) = s;
//		zuo++;
//		you--;
//	}
//}
//void fanzhuanzifu(char *arr)
//{
//	char lin = *arr;
//	int you = len(arr)-1;
//	*arr = *(arr + you);
//	*(arr + you) = '\0';
//	if (you >= 2)
//	{
//		fanzhuanzifu(arr + 1);
//	}
//	*(arr + you) = lin;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	fanzhuanzifu(&arr);
//	printf("%s", arr);
//	return 0;
//}




//int geweihe(int a)
//{
//	int sum = a % 10;
//	if (a >= 10)
//	{
//		 sum=sum+geweihe(a / 10);
//	}
//	return sum;
//}
//int main()
//{
//	int a = 1027;
//	int mun = geweihe(a);
//	printf("%d", mun);
//	return 0;
//}



////写一个计算n的k次幂的函数
//double mi(double a, double b)
//{
//	if (b < 0)
//		return 1.0 / mi(a, -b);
//	else if (b > 0)
//		return a * (mi(a, b - 1));
//	else
//		return 1;
//}
//int main()
//{
//	double  n = 0.0;
//	double  k = 0.0;
//	scanf("%lf%lf", &n, &k);
//	printf("%lf", mi(n, k));
//
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,67};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p \n",i, &arr[i]);//%p是打印地址的---十六进制数字
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* pa = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*pa );
//		pa++;
//	}
//	return 0;
//}



//二维数组
//int main()
//{
	//int arr[3][4];//创建
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//初始化
	//int arr[3][4]={1,2,3,4,5}//不完全初始化 - 后面补0，char类型补"\0"
	//行可以省略，列不可以省略
	/*int arr[][4] = { {1,2,3},{3,2},{1,5,2} };
	int i = 0;
	int j = 0;
	for (i=0;i<3;i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;*/
//	int arr[][4] = { {1,2,3},{3,2},{1,5,2} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p ",i,j ,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//二维数组在内存中的存储
//int main()
//{
//	int i = 0;
//	int arr[3][5] = { 1,2,3,4,5,6,5,6,4,7,8,24,6,6,24 };
//	int* p = arr;
//	for (i = 1; i <= 15; i++)
//	{
//		printf("%2d", *p);
//		i % 5 == 0 ? printf("\n") : printf(" ");
//		p++;
//	}
//	return 0;
//}



//冒泡排序
//将乱序数组从小到大排序
//void paixv(int *p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int f = 1;
//		int* c = p;
//		for (int s = 0; s < sz - 1 - i; s++)
//		{
//			int a = 0;
//			if (*c > *(c + 1))
//			{
//				a = *(c + 1);
//				*(c + 1) = *c;
//				*c = a;
//				f = 0;
//			}
//			c++;
//		}
//		if (f == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,2,9,8,6,0,7,1,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixv(&arr,sz);
//	//数组名是数组首元素的地址
//	// 但是有两个例外
//	// 1.sizeof（数组名） - 数组名表示整个数组 - 计算的是整个数组的大小，单位是字节
//	// 2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//	//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = 7;
//	int c = a & b;//按（二进制）位与
//	//a:00000000000000000000000000000101
//	//b:00000000000000000000000000000111
//	//c:00000000000000000000000000000101
//	printf("%d", c);
//
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int c = a | b;//按（二进制）位或
//	//a:00000000000000000000000000000101
//	//b:00000000000000000000000000000011
//	//c:00000000000000000000000000000111
//	printf("%d", c);
//
//	return 0;
//}int main()
//int main ()
//{
//	int a = 5;
//	int b = 3;
//	int c = a ^ b;//按（二进制）位异或
//	//相同为零，相异为一
//	//a:00000000000000000000000000000101
//	//b:00000000000000000000000000000011
//	//c:00000000000000000000000000000110
//	printf("%d", c);
//
//	return 0;
//}
//int main()
//{
//	int a = 7;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 31; i++)
//	{
//		if (a & 1 == 1)
//		{
//			sum++;
//			a = a >> 1;
//		}
//		else
//		{
//			a = a >> 1;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	int b = 0;
//	//10000000000000000000000000000101源码
//	//11111111111111111111111111111010反码
//	//11111111111111111111111111111011补码
//	// ~按位（二进制）取反
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	b = ~a;
//	printf("%d", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 2, c = 3, d = 4;
//	int i = a++ && ++b && d++;//第一个&&前的a++为零，&&右边的表达式无论为多少，结果一定为零。故右面的表达式不再计算
//	//int i=a++||++b||d++;//同理，若第一个||前的表达式为真，则||的结果一定为真。故||后的表达式不再计算
//	printf("i=%d a=%d b=%d c=%d d=%d", i, a, b, c, d);
//
//
//	return 0;
//}



////结构体
//struct book
//{
//	char name[20];
//	char id[15];
//	float price;
//
//};
//int main()
//{
//	struct book a = {"c++","gb20230430",45.30};
//	struct book* pa = &a;
//
//	printf("书名：%s\n", (*pa).name);
//	printf("书号：%s\n", (*pa).id);
//	printf("定价：%f\n", (*pa).price);
//
//	printf("书名：%s\n", pa->name);
//	printf("书号：%s\n", pa->id);
//	printf("定价：%f\n", pa->price);
//
//	printf("书名：%s\n", a.name);
//	printf("书号：%s\n", a.id);
//	printf("定价：%f\n", a.price);
//
//
//	return 0;
//}



////整形提升
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}

//
//void chushihua(int *arr,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		*arr = 0;
//		arr++;
//	}
//}
//void print(int *arr, int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ",*arr);
//		arr++;
//	}
//	printf("\n");
//}
//void nizhi(int* arr, int a)
//{
//	int i = 0;
//	int s = 0;
//	for (i = 0; i < (a / 2); i++)
//	{
//		s = *arr;
//		*arr = *(arr + a - 1 - 2*i);
//		*(arr + a - 1 - 2*i) = s;
//		arr++;
//	}
//
//
//}
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10 };
//	int l=sizeof(arr) / sizeof(arr[0]);
//	print(arr, l);
//	nizhi(arr, l);
//	print(arr, l);
//	chushihua(arr,l);
//	print(arr,l);
//	return 0;
//}


//指针类型的意义
// 1指针类型决定了：指针解引用的权限
// 2指针类型决定了，指针走一步，能走多远（步长）
// 
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = &arr;
//	*pa = 0;
//	
//	
//	return 0;
//}
//int main()
//{
//
//	int arr = 0x11223344;
//	char* pa = &arr;
//	*pa = 0;
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int * a = &arr[0];
//	int * b = &arr[9];
//	printf("%d", b - a);//指针减去指针得到的是两个指针间元素的个数
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr;
//	//[]是一个操作符  5和arr是两个操作数
//	// arr[5]-->*（arr+5）-->*(5+arr)-->5[arr]
//	// arr[5]<-->*（arr+5）<-->*(p+5)<-->*(5+p)<-->*(5+arr)<-->5[arr]
//	// 
//	printf("%d\n", arr[5]);
//	printf("%d\n", 5[arr]);
//	printf("%d\n", 5[p]);
//	printf("%d\n", p[5]);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = &arr[5];//pa是指针变量，一级指针
//	//ppa是一个二级指针变量
//	int** ppa = &pa;//pa也是一个变量，&pa取出pa再内存中的地址
//	//同理，pppa是一个三级指针
//	int*** pppa = &ppa;
//	printf("%d\n", ***pppa);
//	printf("%d\n", **ppa);
//	printf("%d\n", *pa);
//	return 0;
//}
//intmain ()
//{
//	int arr[10];//整形数组
//	char ch[10];//字符数组
//	//指针数组 - 存放指针的数组
//	int *parr[10];//整形指针数组
//	char* pch[10];//字符指针数组
//
//	return 0;
//}



//struct ac
//{
//	int a;
//	int b;
//
//};
//struct stu
//{
//	//成员变量
//	
//	struct ac d;
//	char name[10];//名字
//	int age;//年龄
//	char id[20];//学号
//
//}x1,x2;//x1，x2也是结构体变量
// //且x1，x2，是全局变量
//int main()
//{
//	//s是全局变量
//	struct stu s = { {2,4},"zhangsan",16,"201914100212"};//对象
//	printf("%d\n", s.d.a);
//	printf("%s\n", s.name);
//	struct stu* pa = &s;
//	printf("%d", (*pa).d.b);
//	printf("%d", pa->d.b);
//
//	return 0;
//}





//struct ac
//{
//	int a;
//	int b;
//
//};
//struct stu
//{
//	//成员变量
//
//	struct ac d;
//	char name[10];//名字
//	int age;//年龄
//	char id[20];//学号
//
//};
//void print1(struct stu t)
//{
//	printf("%d %d %s %d %s \n",t.d.a,t.d.b,t.name,t.age,t.id);
//}
//void print2(struct stu* pa)
//{
//
//	printf("%d %d %s %d %s \n", pa->d.a, pa->d.b, pa->name, pa->age, pa->id);
//}
//int main()
//{
//	//s是全局变量
//	struct stu s = { {2,4},"zhangsan",16,"201914100212" };//对象
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}



//#include <string.h>
//#include <assert.h>
//char*  my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);//断言
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}



////const修饰指针变量
//int main()
//{
//	int a = 10;
//	int b = 100;
//
//	 int const * p = &a;
//	int* s = p;
//	*s = 5;
//	printf("%d", *s);
//	//*p=b;
//	//const在*的左边则*p不能改变
//	int* const pa = &a;
//	//pa = &b;
//	//const 在pa的左边*的右边时，pa不能改变
//
//	return 0;
//}


//#include <assert.h>
////size_t --- unsigned int
//size_t my_strlen(char* arr)
//{
//	assert(arr != NULL);
//	size_t sum = 0;
//
//	while (*arr++!='\0')
//	{
//		sum++;
//	}
//	return sum;
//}
//int main()
//{
//	char arr[] = "hello world";
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//计算一个整数二进制位中有几个1
//int anwei(int a)//只能计算正整数
//{
//	int count = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//			
//		}
//		
//		
//		a = a >> 1;
//		
//	}
//	return count;
//}
//int anwei(int a)//法一
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//
//		if (((a >>i)& 1) == 1)
//		{
//			count++;
//		}
//	
//	}
//	return count;
//}
//int anwei(int a)//法二
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = 0;
//	ret = anwei(a);
//	printf("%d\n", ret);
//	return 0;
//}



////判断一个正整数数字是不是2的n次方
//void panduan(int a)
//{
//	if (a == 1)
//	{
//		printf("不是2的n次方");
//	}
//	else if ((a&(a-1))==0)
//	{
//		printf("是2的n次方");
//	}
//	else
//	{
//		printf("不是2的n次方");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	panduan(a);
//
//	return 0;
//}




////求两个整数二进制位中不同位的的个数
//int anwei(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 2299;
//	int b = 1999;
//	int s = a ^ b;
//	int ret = anwei(s);
//	printf("%d", ret);
//}



//获取一个整数二进制位中所有奇数位和偶数位
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 31; i >= 0; i -= 2)
//	{
//	
//		printf("%d ", ((a >> i) & 1));
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//	
//		printf("%d ", ((a >> i) & 1));
//	}
//
//
//	return 0;
//}



//指针数组
//数组的每个元素都是指针
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 3,4,5,6,7 };
//	int c[] = { 2,3,4,5,6 };
//	int* p[] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//}


//数组指针
//int main()
//{
//	int arr[7] = { 8,2,3,4 };
//	int(*parr)[7] = &arr;//parr就是一个数组指针，存放的是数组的地址
//	printf("%p\n", *parr);
//	double* d[4];//d是一个指针数组
//	double* (*pd)[4] = &d;//pd是一个数组指针，存放的是指针数组的地址
//
//
//	return 0;
//}


//void print(int(*p)[4], int h, int l)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < l; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{3,2,4,6},{6,4,7,5} };
//	print(&arr, 3, 4);
//
//
//	return 0;
//}



//int ci(int a, int y)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < y; i++)
//	{
//		sum = sum * a;
//	}
//	return sum;
//
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int he = 0;
//	for (i = 0; i < n; i++)
//	{
//		/*sum = sum + a * ci(10,i);
//		printf("%d ", sum);*/
//		sum = 10 * sum + a;
//		printf("%d ", sum);
//		he = sum + he;
//	}
//	printf("\n%d", he);
//
//	return 0;
//}



//int main()
//{
//	int arr[6] = { 2,3,1,4,3,1 };
//	
//	int l = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < l; i++)
//	{
//		
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}



//int ci(int a, int b)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < b; i++)
//	{
//		sum = sum * a;
//	}
//	return sum;
//
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100000; i++)
//	{
//		int n = 1;
//		int s = i;
//		while (s / 10)
//		{
//			n++;
//			s = s / 10;
//		}
//		int sum = 0;
//		s = i;
//		while (s)
//		{
//			sum = sum + pow(s % 10 ,n);
//			s = s / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//打印一个菱形
//int main()
//{
//	int hang = 0;
//	scanf("%d", &hang);
//	int i = 0;
//	for (i = 0; i < hang; i++)
//	{
//		int a = 0;
//		for (a = 0; a < hang - i - 1; a++)
//		{
//			printf(" ");
//		}
//		for (a = 0; a < 2 * i + 1; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	for (i = 0; i < hang; i++)
//	{
//		int a = 0;
//		for (a = 0; a < i + 1; a++)
//		{
//			printf(" ");
//		}
//		for (a = 0; a < 2 * (hang - i - 1) - 1; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//有20元，矿泉水1元1瓶；两个空瓶换一瓶；能喝几瓶？
//int main()
//{
//	int money = 20;
//	int he = 0;
//	int kong = 0;
//	while (money)
//	{
//		money--;
//		he++;
//		kong++;
//		if (kong % 2 == 0)
//		{
//			he++;
//			kong++;
//		}
//	}
//	printf("%d", he);
//
//
//	return 0;
//}


//改变一个数组的顺序，使得奇数在前，偶数在后；
//void print(int* p, int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}
//void huan(int* p, int a)
//{
//	int* w = p + a - 1;
//	int* q = p;
//	int i = 0;
//	int arr[20] = {0};
//	int* parr = &arr[0];
//	int* last = &arr[19];
//	int zuo = 0;
//	int you = 0;
//	for (i = 0; i < a; i++)
//	{
//		if (*p % 2 == 1)
//		{
//			*parr = *p;
//			parr++;
//			zuo++;
//		}
//		else
//		{
//			*last = *p;
//			last--;
//			you++;
//		}
//		p++;
//	}
//	parr = parr-zuo;
//	last = last + you;
//	for (i = 0; i < zuo; i++)
//	{
//		*q = *parr;
//		parr++;
//		q++;
//	}
//	for (i = 0; i < you; i++)
//	{
//		*w = *last;
//		last--;
//		w--;
//	}
//	
//
//}
//int main()
//{
//	int arr[10] = { 2,2,2,2,2,2,2,2,2,2 };
//	int a = sizeof(arr) / sizeof(arr[0]);
//	huan(arr,a);
//	print(arr, a);
//	return 0;
//}



//打印一个杨辉三角
//int main()
//{
//	int arr[10][10] = {0};
//	int a = 10;
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (int e = 0; e < a-i; e++)
//		{
//			printf(" ");
//		}
//		for (int h = 0; h <= i; h++)
//		{
//			if (h == 0||h==i)
//			{
//				arr[i][h] = 1;
//				printf("%d ", arr[i][h]);
//			}
//			else
//			{
//				arr[i][h] = arr[i - 1][h-1]+arr[i-1][h];
//				printf("%d ", arr[i][h]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	char killer = 'A';
//	for (killer='A';killer<='D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D')+(killer != 'D') == 3)
//		{
//			printf("killer是 %c", killer);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1;  a <= 5;a++)
//	{
//		for (b = 1; b <= 5;b++)
//		{
//			for (c = 1; c <= 5;c++)
//			{
//				for (d = 1;  d <= 5;d++)
//				{
//					for (e = 1;  e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1)&&(a*b*c*d*e==120))
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//
//	}
//	
//
//	return 0;
//}



//函数指针
// 
//函数名 == &函数名
//数组名 != &数组名
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", &add);
//	printf("%p\n", add);
//	
//	int (*p)(int, int) = &add;
//	//int a = (*p)(7, 56);
//	int a = p(7, 56);//二者等价
//
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1.void(*)() - 函数指针
//	//2.(void(*)()) - 对0强制类型转换，被解释为一个函数地址
//	//3.*(void(*)()) - 对0地址进行了解引用
//	//4.(*(void(*)())() - 调用0地址处的函数
//	//《C陷阱与缺陷》
//
//
//	return 0;
//}
//
//typedef void(*pfun_t)(int);//对void(*)(int)重定义为pfun_t
//pfun_t signal(int, pfun_t);
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	//1.signal(int,void(*)(int))是一个名为signal参数为int和void(*)(int)函数指针类型的函数
//	//2.signal的返回类型也为void(*)(int)函数指针类型
//	//3.所以signal只是一个函数声明
//
//
//	return 0;
//}



//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*ps1)(int, int) = Add;//函数指针
//	int(*ps2)(int, int) = Sub;//函数指针
//	int(*psa[2])(int, int) = { Add,Sub };//psa就是函数指针数组
//
//	return 0;
//}


//void menu()
//{
//	printf("******************************\n");
//	printf("*******1.add     2.sub********\n");
//	printf("*******               ********\n");
//	printf("*******3.mul     4.div********\n");
//	printf("**********  0.exit  **********\n");
//	printf("******************************\n");
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int(*arr[4])(int, int) = {add,sub,mul,div};//函数指针数组
//	
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			int ret = 0;
//			ret = (arr[input - 1])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("程序退出");
//		}
//		else
//		{
//			printf("请输入正确的数字\n");
//		}
//
//	} while (input);
//	return 0;
//}



//void menu()
//{
//	printf("******************************\n");
//	printf("*******1.add     2.sub********\n");
//	printf("*******               ********\n");
//	printf("*******3.mul     4.div********\n");
//	printf("**********  0.exit  **********\n");
//	printf("******************************\n");
//
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int jisuan(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数\n");
//	scanf("%d %d", &x, &y);
//	return p(x, y);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		int ret = 0;
//		switch(input)
//		{
//		case 1:
//			ret = jisuan(add);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = jisuan(sub);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = jisuan(mul);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = jisuan(div);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("程序退出\n");
//			break;
//		default:
//			printf("请输入正确的数字\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int a = 2147483647;
//	int b = a + 1;
//	printf("%d", b);
//	return 0;
//}



//冒泡排序
//void bubble(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int zuo = 0;
//		for (zuo = 0; zuo <= sz-2 - i; zuo++)
//		{
//			if (arr[zuo] > arr[zuo + 1])
//			{
//				int tmp = arr[zuo];
//				arr[zuo] = arr[zuo + 1];
//				arr[zuo + 1] = tmp;
//			}
//		}
//
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//void qsort(void* base,   //base中存放的是待排序数据中第一个对象的地址
//            size_t num,  //待排序数据的元素个数
//            size_t size, //待排序数据中单个元素的大小，单位是字节
//            int (*cmp)(const void*, const void*)//用来比较待排序数据中两个元素的大小的函数
//            );
//
//#include <stdlib.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int int_sort(const void*p1,const void*p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), int_sort);
//	print(arr, sz);
//}
//struct stu
//{
//	char name[20];
//	int age;
//	int id;
//};
//int struct_sort(const void*p1,const void*p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//}
//void test2()
//{
//	struct stu arr[4] = { {"zhangsan",16,{2372834}},
//		{"lisi",  15,2347478 },
//		{"wangwu",20,3253452},
//		{"liming",19,2330542} };
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), struct_sort);
//
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}




//void huan(char*p1,char*p2,int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		char a = *p1;
//		*p1 = *p2;
//		*p2 = a;
//		p1++; 
//		p2++;
//	}
//}
//void my_qsort(void* base,
//	size_t num,
//	size_t size,
//	int (*cmp)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (int s=0;s<num-1-i;s++ )
//		{
//			if (*((char*)base+s*size)- *((char*)base + (s+1)*size)>0)
//			{
//				huan((char*)base + s * size, (char*)base + (s + 1) * size,size);
//			}
//		}
//	}
//
//}
//void zheng(const void* q1,const void*q2)
//{
//	return *((int*)q1) - *((int*)q2);
//}
//void print(int arr[], int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, se, sizeof(arr[0]), zheng);
//	print(arr, se);
//}
//int main()
//{
//	test1();
//	return 0;
//}




//float f2(unsigned n)
//{
//	float sum = 1, power = 1;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		power *= 2;
//		sum += power;
//	}
//	return sum;
//}
//int f1(unsigned n)
//{
//	int sum = 1, power = 1;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		power *= 2;
//		sum += power;
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int x = 134;
//	unsigned int y = 246;
//	unsigned int z = x - y;
//	unsigned int a = 0xffffff90;
//	int c=f1(30);
//	float b = f2(126);
//	printf("%d   %f", c, b);
//
//	return 0;
//}


//int main()
//{
//	char* str1 = "hello world";
//	char* str2 = "hello world";
//	//"hellow world"是常量字符串，不会被更改，所以在内存中只创建一份
//	//故str1==str2，他们都存放的是“h”的地址；
//	if (str1 == str2)
//	{
//		printf("same");
//	}
//	else
//		printf("no same");
//	return 0;
//}


//int cha(int arr[3][3],int* h,int* l,int k )
//{
//	int x = 0;
//	int y = *l - 1;
//	while (x < *h && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else 
//		{
//			*h = x;
//			*l = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int h = 3;
//	int l = 3;
//	int t = cha(arr,&h,&l,k);
//	if (t == 1)
//	{
//		printf("found\n 下标为[%d][%d]",h,l);
//	}
//	else
//		printf("no found");
//	return 0;
//}



//左旋字符
//方法一
//void zuo_xuan(char p[], int k, int sz)
//{
//	int j = 0;
//	int i = 0;
//	for ( i = 0; i < k; i++)
//	{
//		int tmp = p[0];
//		for ( j = 0; j < sz-1;j++)
//		{
//			p[j] = p[j + 1];
//
//		}
//		p[sz - 1] = tmp;
//
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	zuo_xuan(arr, k, sz);
//	printf("%s\n", &arr);
//	return 0;
//}
//方法二
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void zuo_xuan(char*arr, int k, int sz)
//{
//	reverse(arr, arr + k-1);
//	reverse(arr + k,arr+sz-1);
//	reverse(arr,arr+sz-1);
//
//}
//int main()
//{
//	char arr[] = "ABCDEFG";
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	zuo_xuan(arr, k, sz);
//	printf("%s\n", &arr);
//	return 0;
//}
////判断一个字符串是否由另一个字符串旋转得来的
//#include<string.h>
//int is_zuo_xuan(char p[], int sz,char p2[])
//{
//	int j = 0;
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		int tmp = p[0];
//		for ( j = 0; j < sz-1;j++)
//		{
//			p[j] = p[j + 1];
//
//		}
//		p[sz - 1] = tmp;
//		if (strcmp(p, p2) == 0)
//		{
//			return 1;
//		}
//
//	}
//}
//
//int main()
//{
//	char arr1[] = "ABCDEFG";
//	char arr2[] = "ABCDEFA";
//	int k = 1;
//	int sz = sizeof(arr1) / sizeof(arr1[0])-1;
//	int ret =is_zuo_xuan(arr1, sz,arr2);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//		printf("no");
//	return 0;
//}



////实现模拟strcat
////追加字符串
//#include <assert.h>
//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* i = p1;
//	while ( *p1 )
//	{
//		p1++;
//	}
//	while ( *p1++ = *p2++ )
//	{
//		;
//	}
//	return i;
//}
//int main()
//{
//	char arr1[20] = "hello \0############";
//	char arr2[] = "world!!!";
//	printf("%s\n",my_strcat(arr1, arr2));
//	return 0;
//
//}



////模拟实现strcmp
////比较两个字符串的大小
//#include<string.h>
//int my_strcmp(const char* p1, const char* p2)
//{
//	while (*p1 && *p2)
//	{
//		if ((*p1 - *p2 )== 0)
//		{
//			p1++;
//			p2++;
//		}
//		else
//		{
//			return *p1 - *p2;
//		}
//	}
//	return *p1 -*p2;
//}
//int main()
//{
//	char arr1[] = "xdd";
//	char arr2[] = "xxdd";
//	int a = my_strcmp(arr1, arr2);
//	//int a = strcmp(arr1, arr2);
//	if (a > 0)
//	{
//		printf("arr1>arr2\n");
//	}
//	else if (a < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//	else
//	{
//		printf("arr1==arr2");
//	}
//	return 0;
//}



////模拟实现strstr
////在一个字符串中找另外一个字符串，返回找到的第一个字符串的地址,找不到返回一个空指针
//char* my_strstr(const char* p1, const char* p2)
//{
//	const char* tmp = p2;
//	char* ret = NULL;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*p1 && *p2)
//	{
//
//		if (*p1 == *p2)
//		{
//			if (p2 == tmp)
//			{
//				ret = p1;
//			}
//			p2++;
//			if (*p2 == '\0')
//			{
//				return ret;
//			}
//		}	
//		else if(*p2!=*tmp)
//		{
//			p2 = tmp;
//			p1=ret;
//		}
//
//		p1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "bbbbbbc";
//	char arr2[] = "";
//	char* s = my_strstr(arr1, arr2);
//	if (s == NULL)
//	{
//		printf("没找到");
//	}
//	else
//		printf("%s\n", s);
//	return 0;
//}


////字符串切割函数strtok
//#include<string.h>
//int main()
//{
//	char arr1[] = "232444423@qq.com";
//	char arr2[] = ".@";
//	for (char * ret = strtok(arr1, arr2); ret != NULL; ret=strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//strerror返回错误码对应的错误信息
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	//打开文件失败的时候会返回NULL
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//	//	printf("%s", strerror(errno));
//		perror("open");
//		//直接打印错误信息，可以附加自定义信息
//		return 1;
//	}
//	//读文件
//	// 
//	// 
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////内存操作函数
////memcpy - 内存拷贝
//#include<ctype.h>
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = {0};
//	memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

////模拟实现memcpy函数
////memcpy不能拷贝重叠的内存
//void* my_memcpy(void* d, const void* p, unsigned int a)
//{
//	void* f = d;
//	while (a--)
//	{
//		*((char*)d)++ = *((char*)p)++;
//	}
//	return f; 
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = {0};
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}



////memmove可以拷贝重叠的内存
////模拟实现memmove
//void* my_memmove(void* d,const void* p, unsigned int a)
//{
//	void* f = d;
//	if (d < p)
//	{
//		while (a--)
//		{
//			*((char*)d)++ = *((char*)p)++;
//		}
//	}
//	else 
//	{
//		(char*)d = (char*)d + a-1;
//		(char*)p = (char*)p + a-1;
//		while (a--)
//		{
//			*((char*)d)-- = *((char*)p)--;
//		}
//	}
//	return f;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*s=my_memmove(arr1, arr1+1, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", s[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}


////memcmp - 内存比较函数
////相同返回0，第一个大于第二个返回一个正数，小于返回负数
////与strcmp返回值类似
//int main()
//{
//	float arr1[] = { 1.0,2.35,3.0,6.7 };
//	float arr2[] = { 1.0,3.2 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d", ret);
//
//	return 0;
//}


////memset - 内存设置，以字节为单位修改为自定义的值
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 255, 20);
//	
//
//	return 0;
//}


////结构体变量
//struct book
//{
//	char name[20];
//	float price;
//	char ID[12];
//
//
//}b1,b2,b3;//这里的b1，b2，b3是全局变量
//int main()
//{
//	struct book b4;
//	struct book b5;
//	struct book b6;//这里的变量为局部变量 
//
//	return 0;
//}

////匿名结构体变量
//struct book
//{
//	char name[20];
//	float price;
//	char ID[12];
//}s;
//struct book
//{
//	char name[20];
//	float price;
//	char ID[12];
//}*ps;
////以上两个结构体会被编译器当成完全不同的类型
//int main()
//{
//	//ps = s;//error,所以非法
//
//	return 0;
//}

////结构体自引用
//struct node
//{
//	int data[20];
//	struct node* p;//包含同类型的结构体指针
//};
//int main()
//{
//
//
//	return 0;
//}

////结构体内存对齐
////1.结构体第一个成员 放在结构体变量在内存中储存位置的零偏移量
////2.从第二个成员后的所有成员，都放在一个对齐数（成员的大小和默认对齐数的较小值）
////的整数倍的地址处
////3.结构体的总大小是结构体所有成员的对齐数中最大的那个对齐数的整数倍
////4.如果嵌套了结构体，嵌套的结构体对齐到自己最大对齐数的整数倍处
////最后结构体的整体大小就是所有最大对齐数（包含被嵌套的结构体的对齐数）的整数倍
//struct s1
//{
//	int a;
//	char b;
//};struct s2
//{
//	char i;
//	char b;
//	double a;
//	char c;
//	struct s1 s;
//};
//int main()
//{
//	struct s1 s1 = { 0 };
//	struct s2 s2 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

////修改默认对齐数
//#pragma pack(2)//修改默认对齐数为2
//struct s
//{
//	char a;
//	int b;
//	char c;
//};
//#pragma pack()//还原默认对齐数（8）
//int main()
//{
//	printf("%u ", sizeof(struct s));
//	return 0;
//}


////位段
////位段的成员类型必须是 int ,unsigned int , signed int ，char
////位段的成员名后有一个冒号和一个数字
////从低位向高位使用空间
//struct A
//{
//	//int 4个字节 - 32bit
//	int a : 2;//a成员占2个比特位
//	int b : 5;//a成员占5个比特位
//	int c : 10;//a成员占10个比特位
//	//剩15个
//	//int 4个字节 - 32bit
//	int d : 30;//a成员占30个比特位
//	//不能超过类型大小
//};
//int main()
//{
//	printf("%d", sizeof(struct A));
//
//	return 0;
//}


////枚举类型
//enum color
//{
//	red,   //0
//	green, //1
//	blue   //2
//	    //枚举类型的可能取值
//	    //常量(可以赋初值)
//	    //如red=4，green=7
//};
//int main()
//{
//	enum color a = red;
//	//printf("%d \n", red);
//	//printf("%d \n", green);
//	//printf("%d \n", blue);
//	printf("%d ", sizeof(a));
//	return 0;
//}


////联合体（共用体）
////联合体的成员公用一块空间
////联合体的大小最小是他最大成员的大小
//union s
//{
//	char a;
//	int i;
//};
//int main()
//{
//	union s csc = { 0 };
//	csc.i = 0x44332211;
//	printf("%d", csc.a);
//	return 0;
//}

////联合体的大小
////联合体的大小至少是最大成员的大小
////当最大成员的大小不是最大对齐数的大小时，就要对齐到最大对齐数的整数倍
//union u
//{
//	short a[5];//每个short 2字节共10字节（对齐数是2）
//	int b;//4字节（对齐数是4）故最后该类型大小为12字节
//};
//int main()
//{
//	printf("%d ", sizeof(union u));
//	return 0;
//}



////动态内存开辟
//malloc
//#include<stdlib.h>
//int main()
//{
//	//开辟10个int空间
//	//int arr[10];//在栈区
//	//动态内存分配
//	int*p=(int*)malloc(10 * sizeof(int));//在堆区
//	//malloc默认返回void*
//	//在使用开辟的空间时
	//if (p == NULL)//p == NULL说明开辟失败
	//{
	//	perror("main");//main:**********
	//	return 0;
	//}
//	//使用
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]-->*(p+i)
//	}
//	//回收空间
//	free(p);//free只能释放在堆上开辟的空间
//	p = NULL;//需要手动把p置为空指针
//
//	return 0;
//}


////calloc
////除了与malloc参数不同之外 calloc会将开辟的内存空间初始化为0
////而malloc不会
//#include<stdlib.h>
//int main()
//{
//	int* p = (int *)calloc(10, 4);//（元素个数，单个元素大小）
// 	if (p == NULL)
//  {
//	perror("main");
//	return 0;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


////realloc
////扩大已经开辟的空间（需要扩大的空间地址，扩大后新的空间大小）
////realloc可能返回原来的地址，新地址，空指针（扩大空间失败），因此需要判断返回的指针
////realloc不会初始化扩大的空间
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//	//假如此处需要20个int类型，扩大p的空间大小
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		p[i] = i;
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}



////柔性数组
////结构体中的最后一个成员可以是大小未知的数组（柔性数组）
//// 柔性数组前必须有一个其他成员
////需要配合malloc开辟空间使用，并且要考虑柔性数组的可能大小
////
//#include <stdlib.h>
//struct s
//{
//	int a;
//	int arr[];//或者写为 int arr[0];(柔性数组)
//	          //其大小未知
//}; int main()
//{
//
//	//printf("%d ", sizeof(struct s));//sizeof 计算其大小不包含柔性数组大小
//	
//	struct s* x=NULL;
//	struct s* p = (struct s*)malloc(sizeof(int) + 10 * sizeof(int));
//	//此时创建的结构体中的柔性数组arr为10int大小
//	if (p == NULL)
//	{
//		perror;
//		return 1;
//	}
//	x = p;
//	for (int i = 0; i < 10; i++)
//	{
//		p->a = 1 + i;
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	printf("\n%d", p->a);
//
//	free(p);
//	p = NULL;
//	x = NULL;
//
//	return 0;
//}


////已知有一个从小到大的有序数字序列，将一个新输入的数字插入到该序列中去，使该序列仍然升序
////第一行输入一个整数n（>=0,<=50）
////第二行输入n个数字组成的升序序列
////第三行输入要插入的数字
//int main()
//{
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	scanf("%d", &a);
//	i = 0;
//	while ((a > arr[i])&&(i < n))
//	{
//		i++;
//	}
//	for (int m = 0; m < n - i; m++)
//	{
//		arr[n -m] = arr[n-1-m];
//	}
//	arr[i] = a;
//	printf("\n");
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////文件的打开和关闭
//int main()
//{
//	//打开文件
//	//FILE* pf = fopen("test.txt", "w");//相对路径
//	FILE* pf = fopen("E:\\C_project\\test\\test\\test.txt", "w");//绝对路径
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////输出流
//int main()
//{
//	fputc('h', stdout);//stdout标准输出流
//	fputc('e', stdout);
//	fputc('l', stdout);
//	fputc('l', stdout);
//	fputc('o', stdout);
//
//	return 0;
//}

//fgrtc读取完或者遇到错误时会返回EOF（-1）
////从文件流中读取数据
//int main()
//{
//	FILE* pf = fopen("E:\\C_project\\test\\test\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////从标准输入流中读取数据
//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	return 0;
//}


////写文件
////按行写字符串
//int main()
//{
//	FILE* pf = fopen("E:\\C_project\\test\\test\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("aasdczg\n", pf);
//	fputs("aabafbfg\n", pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////读文件
//int main()
//{
//
//	char arr[10] = "xxxxxxxxxx";
//	FILE* pf = fopen("E:\\C_project\\test\\test\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fgets(arr, 4, pf);//读4个字符，实际上是三个，最后一个留着放\0
//	printf("%s\n", arr);
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////格式化的数据写文件
//struct s
//{
//	char arr[10];
//	int ret;
//	float a;
//};
//int main()
//{
//	struct s a = { "siajbciba",3,3.45f };
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("1");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", a.arr,a.ret,a.a);
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}


//格式化的数据读文件
//struct s
//{
//	char arr[10];
//	int ret;
//	float a;
//};
//int main()
//{
//	struct s a = {0};
//	//对格式化的数据进行读文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("1");
//		return 1;
//	}
//	//读文件
//	fscanf(pf, "%s %d %f", &(a.arr), &(a.ret), &(a.a),a);
//	printf("%s %d %f", a.arr, a.ret, a.a);
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}


//二进制形式的读写
//struct s
//{
//	char arr[10];
//	int ret;
//	float a;
//};
//int main()
//{
//	struct s a = { "assdda",34,54.78};
//	//以二进制的形式写文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("1");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(a), 1,pf);
//
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}


//struct s
//{
//	char arr[10];
//	int ret;
//	float a;
//};
//int main()
//{
//	struct s a = { 0 };
//	//以二进制的形式读文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("1");
//		return 1;
//	}
//	//写文件
//	fread(&a,sizeof(a),1,pf);
//	printf("%s %d %f", a.arr, a.ret, a.a);
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}



//struct s
//{
//	char arr[10];
//	int ret;
//	float a;
//};
//int main()
//{
//	struct s s = { "hello",746,35.39f };
//	char t[30] = { 0 };
//	//sprintf把一个格式化的数据转换为字符串
//	sprintf(t, "%s %d %f", s.arr, s.ret, s.a);
//	printf(t);
//
//	struct s a = { 0 };
//	//sscanf把一个字符串转换为格式化数据
//	sscanf(t, "%s %d %f", a.arr, &(a.ret), &(a.a));
//	printf("\n%s %d %f",a.arr,a.ret,a.a);
//	return 0;
//}


//文件的随机读写
//fseek
//int main()
//{
//	FILE* pf = fopen("fseektest.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 3820;
//	}
//	int i = fgetc(pf);
//	printf("%c\n", i);
//	fseek(pf, 2, SEEK_CUR);//从当前位置处跳过两个字节
//	i = fgetc(pf);
//	printf("%c\n", i);
//	fseek(pf, 0, SEEK_END);//从末尾位置向前跳过一个字节（\0也被计算在内）
//	i = fgetc(pf);
//	printf("%c\n", i);
//	int ret = ftell(pf);//ftell返回当前文件指针距离起始位置的偏移量
//	i = fgetc(pf);
//	printf("%d\n", ret);
//	rewind(pf);//让文件指针回到起始位置
//	i = fgetc(pf);
//	printf("%c\n", i);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("pfread");
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		perror("pfwrite");
//		return 2;
//	}
//	int i = 0;
//	while ((i = fgetc(pfread) )!= EOF)//读文件并判断
//	{
//		//写文件
//		fputc(i,pfwrite);
//	}
//	if (feof(pfread))//feof为真是正常结束
//	{
//		printf("文件正常结束\n");
//	}
//	else if (ferror(pfread))//ferror为真是异常结束
//	{
//		printf("文件读取失败结束\n");
//	}
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//	return 0;
//}


//main()
//{
//	printf("%s\n", __FILE__);//当前源文件的路径
//	printf("%d\n", __LINE__);//当前代码的行号
//	printf("%s\n", __DATE__);//当前日期
//	printf("%s\n", __TIME__);//当前时间
//	printf("%s\n", __FUNCTION__);//当前函数名
//
//	return 0;
//}


//#define 定义宏

//#define SQUARE(X) X*X
////本质依旧是替换
//int main()
//{
//	printf("%d\n", SQUARE(3));//9
//	printf("%d\n", SQUARE(3+1));//7
//	//改为#define SQUARE(X) ((X)*(X))
//
//	return 0;
//}


////#
////把宏的参数插入到字符串中去
//#define PRINT(X,Y) printf("the vule of "#X" is "#Y "\n",X)
//int  main()
//{
//	int a = 10, b = 20, c = 30;
//	float f = 5.6f;
//	PRINT(a, %d);
//	PRINT(b, %d);
//	PRINT(c, %d);
//	PRINT(f, %f);
//	return 0;
//}


////##
////将两个符号合并成一个符号
//#define CAT(X,Y) X##Y
//int main()
//{
//	int classroom = 1000;
//	printf("%d\n", CAT(class, room));
//	return 0;
//}


////带有副作用的宏参数
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("%d %d %d\n",a,b, m);
//
//	return 0;
//}


////#undef
////移除一个已经命名的定义
//#define M 100
//int main()
//{
//	int a = M;
//	printf("%d\n", a);
//#undef M
//	int b = M;
//	printf("%d\n", b);
//	return 0;
//}

////条件编译
//#define PRINT
//#define HEHE
//int main()
//{
//#ifdef PRINT//如果PRINT定义了，下面参与编译
//	printf("hehehe");
//#endif 
//#if defined(PRINT)//写法二，意义同上
//		printf("test");
//#endif
//
//#ifndef HEHE//如果HEHE没有定义，下面参与编译
//	printf("hehe");
//#endif
//#if !defined(HEHE)//写法二，意义同上
//	printf("test2");
//#endif
//	return 0;
//}
////int main()
////{
////#if 1
////
////	printf("hehehe");
////#endif
////
////
////	return 0;
////}
//int main()
//{
//#if 1==5//只能用常量表达式
//	printf("hehehe");
//#elif 1==2
//	printf("haha");
//#else 
//	printf("heiehi");
//#endif
//	//判断方式与else if语句相似
//	return 0;
//}


////库文件包含使用<>
//#include <stdio.h>
////本地文件包含使用""
//#include "add.c"
////<>和""包含头文件的本质区别是查找的策略不同
////""先在自己代码的目录下查找，如果找不到就在库函数头文件的目录下查找
////<>直接在库函数头文件的目录下查找


////防止头文件被多次包含
//#pragma once
////或者
//#ifndef __TEST_H__
//#define __TEST_H__
////头文件内容
//#endif


////模拟实现atoi函数
//#include <stdlib.h>
//#include <ctype.h>
//#include <limits.h>
//
////创建全局变量判断转化是否非法
//enum state
//{
//	hefa,
//	buhefa
//}st;
//int my_atoi(char* p)
//{
//
//	//判断是非为空指针
//	if (p == NULL)
//	{
//		st = buhefa;
//		return 0;
//	}
//	//判断是否为“”
//	if (*p == "")
//	{
//		st = buhefa;
//		return 0;
//	}
//	//跳过空格
//	while (isspace(*p))
//	{
//		p++;
//	}
//	//判断正负号
//	int a = 1;
//	if (*p == '+')
//	{
//		a = 1;
//		p++;
//	}
//	else if (*p == '-')
//	{
//		a = -1;
//		p++;
//	}
//	//转换数字字符
//	long long n = 0;
//	while (isdigit(*p))
//	{
//		n = n * 10 + a * (*p - '0');
//		if (n > INT_MAX)
//		{
//			st = buhefa;
//			return INT_MAX;
//		}
//		else if (n < INT_MIN)
//		{
//			st = buhefa;
//			return INT_MIN;
//		}
//		p++;
//	}
//	//判断是否因'\0'退出循环
//	if (*p == '\0')
//	{
//		st = hefa;
//		return (int)n;
//	}
//	//因字母等其他字符退出循环
//	else
//	{
//		st = buhefa;
//		return (int)n;
//	}
//}
//int main()
//{
//	char *arr = "     -33333333333333333333";
//	int s = my_atoi(arr);
//	if (st = hefa)
//	{
//		printf("合法转化 %d \n", s);
//	}
//	else
//	{
//		printf("非法转化 %d\n", s);
//	}
//	return 0;
//}



////一个数组中只有两个数字出现了一次，其余均出现两次
//void find(int arr[],int sz,int *px,int *py)
//{
//	//异或全部数字
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//寻找ret最低位哪一位为1
//	int a = 0;
// 	for (i = 0; i < 32; i++)
//	{
//		if ((ret & 1) == 1)
//		{
//			a = i + 1;
//			break;
//		}
//		ret = (ret >> 1);
//	}
//	//按第a位异同分组
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> (a - 1) & 1) == 1)
//		{
//			(*px) ^= arr[i];
//		}
//		else
//		{
//			(*py) ^= arr[i];
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,10,8,1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0, y = 0;
//	find(arr, sz, &x, &y);
//	printf("%d %d\n", x, y);
//
//	return 0;
//}



////用宏写出一段代码，讲一个数的二进制奇偶位调换
//
//#define JIAO(A) (((A & 0xaaaaaaaa) >> 1) + ((A & 0x55555555) << 1))
//int main()
//{
//	int a = 10;
//	int z = JIAO(a);
//	printf("%d\n", z);
//	return 0;
//}


//模拟实现offsetof
//返回结构体成员的偏移量
#define offsetof(struct_name ,mem_name) (int)&(((struct_name *)0)->mem_name)
struct A
{
	int a;
	short b;
	char c;
	int d;
}sz;

int main()
{
	int a = offsetof(struct A , a);
	printf("%d\n ", a);
	return 0;
}