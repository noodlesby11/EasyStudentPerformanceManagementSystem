#include"student.h"
void modify_student(int num)
{
	//���ҵ�����ʾ��ѧ������Ϣ
	stude_node* s = search_student1(&head, num);
	if (s == NULL)
	{
		printf("δ�鵽��Ӧѧ����Ϣ\n");
		return;
	}
	printf("ѧ��\t���� �ߵ���ѧ ���Դ��� ��ѧӢ��\n");
	printf("%ld\t%s    %d       %d       %d\n", s->num, s->name, s->gaoshu, s->xiandai, s->yinyu);

	//ѡ���޸ĵ���Ŀ������ѧ�ţ����޸�,ͨ��ѭ�����Բ�ֹ�޸�һ��
	while (1)
	{
		printf("��ѡ��Ҫ�޸ĵ���Ŀ\n");
		printf("1.����\n");
		printf("2.�ߵ���ѧ�ɼ�\n");
		printf("3.���Դ����ɼ�\n");
		printf("4.��ѧӢ��ɼ�\n");
		int flag;
		scanf("%d", &flag);
		switch (flag)
		{
		case 1:
		{
			printf("�������޸ĺ��������\n");
			scanf("%s", s->name);
			printf("�޸ĳɹ�\n");
		}
		break;
		case 2:
		{
			printf("�������޸ĵĸߵ���ѧ�ɼ�;\n");
			scanf("%d", &s->gaoshu);
			printf("�޸ĳɹ�\n");
		}
		break;
		case 3:
		{
			printf("�������޸ĵ����Դ����ɼ�:\n");
			scanf("%d", &s->xiandai);
			printf("�޸ĳɹ�\n");
		}
		break;
		case 4:
		{
			printf("�������޸ĺ�Ĵ�ѧӢ��:\n");
			scanf("%d", &s->yinyu);
			printf("�޸ĳɹ�\n");
		}
		break;
		default:
			printf("����������\n");
			break;
		}

		//ѯ���Ƿ��˳�ѭ��
		int choice = 1;
		printf("�Ƿ�����޸ģ�\n");
		printf("1.���� 2.�˳�\n");
		scanf("%d", &choice);
		if (choice = 2)
			break;
	}
	savef_student(&head);//�޸��걣���ļ�
}