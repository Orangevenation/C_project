#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//读取通讯录
void duqvtxl(struct tongxunlu* pc)
{
	FILE* pf = fopen("tongxunlu.dat", "r");
	if (pf == NULL)
	{
		perror("duqv");
		return;
	}
	struct contact s = { 0 };

	while (fread(&s, sizeof(struct contact),1, pf))
	{
		if (pc->sz == pc->content)
		{

			struct contact* ptr = (struct contact*)realloc(pc->con, (pc->content + KUORONG) * sizeof(struct contact));
			if (ptr == NULL)
			{
				perror("addren");
				return;
			}
			else
			{
				pc->content += KUORONG;
				pc->con = ptr;
				printf("扩容成功\n");
			}
		}
		pc->con[pc->sz] = s;
		pc->sz++;
	}


	fclose(pf);
	pf == NULL;
}
//初始化通讯录 - 动态版本
void chushi(struct tongxunlu* pc)
{
	pc->sz = 0;
	struct contact* ptr = (struct contact*)calloc(CHUSHI, sizeof(struct contact));
	if (ptr == NULL) 
	{
		perror("chushi");
		return;
	}
	else
	{
		pc->con = ptr;
		pc->content = CHUSHI;
	}
	duqvtxl(pc);
}

////增加联系人 - 静态版本
//void addren(struct tongxunlu* pc)
//{
//	if (pc->sz == 1000)
//	{
//		printf("联系人已满");
//		return;
//	}
//	printf("请输入名字>");
//	scanf("%s", &(pc->con[pc->sz].name));
//	printf("请输入性别>");
//	scanf("%s", &(pc->con[pc->sz].sex));
//	printf("请输入年龄>");
//	scanf("%d", &(pc->con[pc->sz].age));
//	printf("请输入电话>");
//	scanf("%s", &(pc->con[pc->sz].tele));
//	printf("请输入地址>");
//	scanf("%s", &(pc->con[pc->sz].addr));
//	pc->sz++;
//	printf("增加成功\n");
//}
//增加联系人 - 动态版本
void addren(struct tongxunlu* pc)
{
	if (pc->sz == pc->content)
	{
		
		struct contact* ptr = (struct contact*)realloc(pc->con,(pc->content + KUORONG)* sizeof(struct contact));
		if (ptr == NULL)
		{
			perror("addren");
			return;
		}
		else 
		{
			pc->content += KUORONG;
			pc->con = ptr;
			printf("扩容成功\n");
		}
		
	}
	printf("请输入名字>");
	scanf("%s", &(pc->con[pc->sz].name));
	printf("请输入性别>");
	scanf("%s", &(pc->con[pc->sz].sex));
	printf("请输入年龄>");
	scanf("%d", &(pc->con[pc->sz].age));
	printf("请输入电话>");
	scanf("%s", &(pc->con[pc->sz].tele));
	printf("请输入地址>");
	scanf("%s", &(pc->con[pc->sz].addr));
	pc->sz++;
	printf("增加成功\n");
}



//打印联系人
void printren(const struct tongxunlu* pc)
{
	printf("%-15s\t %-5s\t %-5s\t %-15s\t %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < (pc->sz); i++)
	{
		printf("%-15s\t %-5s\t %-5d\t %-15s\t %-20s\n",
			pc->con[i].name,
			pc->con[i].sex,
			pc->con[i].age,
			pc->con[i].tele,
			pc->con[i].addr);
	}
}

//查找人名
static int searchren(const struct tongxunlu* pc, char aaa[])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->con[i].name, aaa) == 0)
		{
			return i;
		}
	}
	return -1;//没找到
}
//删除联系人
void delren(struct tongxunlu* pc)
{
	if (pc->sz == 0)
	{
		printf("没有联系人，无需删除\n");
		return;
	}
	//删除联系人
	//有/没有
	printf("请输入要删除人的姓名");
	char aaa[MAX_NAME];
	scanf("%s", &aaa);
	//查找该联系人
	int a=searchren(pc,aaa);
	//没有
	if (a == -1)
	{
		printf("该联系人不存在\n");
		return;
	}
	//有
	for (int i = a; i < pc->sz-1; i++)
	{
		pc->con[i] = pc->con[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

//查找联系人
void search(const struct tongxunlu* pc)
{
	printf("请输入要查找人的姓名");
	char aaa[MAX_NAME];
	scanf("%s", &aaa);
	//查找该联系人
	int a = searchren(pc, aaa);
	//没有
	if (a == -1)
	{
		printf("查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-15s\t %-5s\t %-5s\t %-15s\t %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	
		printf("%-15s\t %-5s\t %-5d\t %-15s\t %-20s\n",
				pc->con[a].name,
				pc->con[a].sex,
				pc->con[a].age,
				pc->con[a].tele,
				pc->con[a].addr);
	}
}

//修改联系人
void modifyren(struct tongxunlu* pc)
{
	printf("请输入要修改人的姓名");
	char aaa[MAX_NAME];
	scanf("%s", &aaa);
	//查找该联系人
	int a = searchren(pc, aaa);
	//没有
	if (a == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字>");
		scanf("%s", &(pc->con[a].name));
		printf("请输入性别>");
		scanf("%s", &(pc->con[a].sex));
		printf("请输入年龄>");
		scanf("%d", &(pc->con[a].age));
		printf("请输入电话>");
		scanf("%s", &(pc->con[a].tele));
		printf("请输入地址>");
		scanf("%s", &(pc->con[a].addr));
		printf("修改成功\n");
	}
}

//退出
void xiaohu(struct tongxunlu* pc)
{
	free(pc->con);
	pc->sz = 0;
	pc->content = 0;
	void savetongxunlu(struct tongxunlu* pc);
}
//保存通讯录
void savetongxunlu(struct tongxunlu* pc)
{
	FILE* pf = fopen("tongxunlu.dat", "w");
	if (pf == NULL)
	{
		perror("save");
		return;
	}
	for (int i = 0; i < pc->sz; i++)
	{
		fwrite(pc->con + i, sizeof(struct contact), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}