#include"student.h"
void fread_student(stude_node* p)
{
	FILE* fp1, * fp2;
	stude_node s1;
	stude_node* Last = p;

	//���ļ�
	if ((fp1 = fopen("StudentInfo.txt", "r")) == NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}
	if ((fp2 = fopen("StudentScore.txt", "r")) == NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}

	//�������ļ���Ϣ
	while ((fscanf(fp1, "%ld %s", &s1.num, s1.name) != EOF) && (fscanf(fp2, "%d %d %d", &s1.gaoshu, &s1.xiandai, &s1.yinyu) != EOF))
	{
		//printf("%ld\t%s    %d       %d       %d\n", s1.num, s1.name, s1.gaoshu, s1.xiandai, s1.yinyu);
		stude_node* trp1 = (stude_node*)malloc(sizeof(stude_node));
		*trp1 = s1;
		Last->next = trp1;
		Last = trp1;
		Last->next = NULL;
	}

	//�ر��ļ�
	if ((fclose(fp1)))
	{
		printf("�ļ��޷��ر�\n");
		exit(0);
	}
	if ((fclose(fp2)))
	{
		printf("�ļ��޷��ر�\n");
		exit(0);
	}
}