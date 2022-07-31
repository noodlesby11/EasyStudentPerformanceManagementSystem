#include"student.h"
void savef_student(stude_node* p)
{
	FILE* fp1, * fp2;

	//���ļ�
	if ((fp1 = fopen("StudentInfo.txt", "w")) == NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}
	if ((fp2 = fopen("StudentScore.txt", "w")) == NULL)
	{
		printf("�ļ���ʧ��\n");
		exit(0);
	}

	//����Ϣ�����ļ�
	stude_node* s1 = p->next;
	while (s1 != NULL)
	{
		fprintf(fp1, "%ld %s\n", s1->num, s1->name);
		s1 = s1->next;
	}
	stude_node* s2 = p->next;
	while (s2 != NULL)
	{
		fprintf(fp2, "%d %d %d\n", s2->gaoshu, s2->xiandai, s2->yinyu);
		s2 = s2->next;
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