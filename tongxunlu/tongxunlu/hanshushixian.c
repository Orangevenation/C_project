#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//��ȡͨѶ¼
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
				printf("���ݳɹ�\n");
			}
		}
		pc->con[pc->sz] = s;
		pc->sz++;
	}


	fclose(pf);
	pf == NULL;
}
//��ʼ��ͨѶ¼ - ��̬�汾
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

////������ϵ�� - ��̬�汾
//void addren(struct tongxunlu* pc)
//{
//	if (pc->sz == 1000)
//	{
//		printf("��ϵ������");
//		return;
//	}
//	printf("����������>");
//	scanf("%s", &(pc->con[pc->sz].name));
//	printf("�������Ա�>");
//	scanf("%s", &(pc->con[pc->sz].sex));
//	printf("����������>");
//	scanf("%d", &(pc->con[pc->sz].age));
//	printf("������绰>");
//	scanf("%s", &(pc->con[pc->sz].tele));
//	printf("�������ַ>");
//	scanf("%s", &(pc->con[pc->sz].addr));
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}
//������ϵ�� - ��̬�汾
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
			printf("���ݳɹ�\n");
		}
		
	}
	printf("����������>");
	scanf("%s", &(pc->con[pc->sz].name));
	printf("�������Ա�>");
	scanf("%s", &(pc->con[pc->sz].sex));
	printf("����������>");
	scanf("%d", &(pc->con[pc->sz].age));
	printf("������绰>");
	scanf("%s", &(pc->con[pc->sz].tele));
	printf("�������ַ>");
	scanf("%s", &(pc->con[pc->sz].addr));
	pc->sz++;
	printf("���ӳɹ�\n");
}



//��ӡ��ϵ��
void printren(const struct tongxunlu* pc)
{
	printf("%-15s\t %-5s\t %-5s\t %-15s\t %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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

//��������
static int searchren(const struct tongxunlu* pc, char aaa[])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->con[i].name, aaa) == 0)
		{
			return i;
		}
	}
	return -1;//û�ҵ�
}
//ɾ����ϵ��
void delren(struct tongxunlu* pc)
{
	if (pc->sz == 0)
	{
		printf("û����ϵ�ˣ�����ɾ��\n");
		return;
	}
	//ɾ����ϵ��
	//��/û��
	printf("������Ҫɾ���˵�����");
	char aaa[MAX_NAME];
	scanf("%s", &aaa);
	//���Ҹ���ϵ��
	int a=searchren(pc,aaa);
	//û��
	if (a == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}
	//��
	for (int i = a; i < pc->sz-1; i++)
	{
		pc->con[i] = pc->con[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//������ϵ��
void search(const struct tongxunlu* pc)
{
	printf("������Ҫ�����˵�����");
	char aaa[MAX_NAME];
	scanf("%s", &aaa);
	//���Ҹ���ϵ��
	int a = searchren(pc, aaa);
	//û��
	if (a == -1)
	{
		printf("���ҵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-15s\t %-5s\t %-5s\t %-15s\t %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	
		printf("%-15s\t %-5s\t %-5d\t %-15s\t %-20s\n",
				pc->con[a].name,
				pc->con[a].sex,
				pc->con[a].age,
				pc->con[a].tele,
				pc->con[a].addr);
	}
}

//�޸���ϵ��
void modifyren(struct tongxunlu* pc)
{
	printf("������Ҫ�޸��˵�����");
	char aaa[MAX_NAME];
	scanf("%s", &aaa);
	//���Ҹ���ϵ��
	int a = searchren(pc, aaa);
	//û��
	if (a == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("����������>");
		scanf("%s", &(pc->con[a].name));
		printf("�������Ա�>");
		scanf("%s", &(pc->con[a].sex));
		printf("����������>");
		scanf("%d", &(pc->con[a].age));
		printf("������绰>");
		scanf("%s", &(pc->con[a].tele));
		printf("�������ַ>");
		scanf("%s", &(pc->con[a].addr));
		printf("�޸ĳɹ�\n");
	}
}

//�˳�
void xiaohu(struct tongxunlu* pc)
{
	free(pc->con);
	pc->sz = 0;
	pc->content = 0;
	void savetongxunlu(struct tongxunlu* pc);
}
//����ͨѶ¼
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