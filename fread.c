#include"student.h"
void fread_student(stude_node* p)
{
	FILE* fp1, * fp2;
	stude_node s1;
	stude_node* Last = p;

	//打开文件
	if ((fp1 = fopen("StudentInfo.txt", "r")) == NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}
	if ((fp2 = fopen("StudentScore.txt", "r")) == NULL)
	{
		printf("文件打开失败\n");
		exit(0);
	}

	//将存入文件信息
	while ((fscanf(fp1, "%ld %s", &s1.num, s1.name) != EOF) && (fscanf(fp2, "%d %d %d", &s1.gaoshu, &s1.xiandai, &s1.yinyu) != EOF))
	{
		//printf("%ld\t%s    %d       %d       %d\n", s1.num, s1.name, s1.gaoshu, s1.xiandai, s1.yinyu);
		stude_node* trp1 = (stude_node*)malloc(sizeof(stude_node));
		*trp1 = s1;
		Last->next = trp1;
		Last = trp1;
		Last->next = NULL;
	}

	//关闭文件
	if ((fclose(fp1)))
	{
		printf("文件无法关闭\n");
		exit(0);
	}
	if ((fclose(fp2)))
	{
		printf("文件无法关闭\n");
		exit(0);
	}
}