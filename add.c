#include"student.h"
void add_student()
{
	stude_node stu;
	/*��ѯҪ��ӵ�ѧ����Ϣ�Ƿ��Ѿ�
	����,����������Ҫ����������Ϣ*/
	printf("������Ҫ���ѧ����ѧ��;\n");
	scanf("%d", &stu.num);
	stude_node* p = search_student1(&head, stu.num);
	if (p != NULL)
	{
		printf("��ѧ����Ϣ�Ѵ���\n");
		return;
	}
	printf("������������\n");
	scanf("%s", stu.name);
	printf("����������ɼ���\n");
	scanf("%d", &stu.gaoshu);
	printf("���������Դ����ɼ���\n");
	scanf("%d", &stu.xiandai);
	printf("�������ѧӢ��ɼ���\n");
	scanf("%d", &stu.yinyu);

	/*����ʾ���ѧ������Ϣ����ͨ��ͷ�巨����������*/
	printf("ѧ��\t���� �ߵ���ѧ ���Դ��� ��ѧӢ��\n");
	printf("%ld\t%s    %d       %d       %d\n", stu.num, stu.name, stu.gaoshu, stu.xiandai, stu.yinyu);
	stude_node* h = &head;
	stude_node* s = (stude_node*)malloc(sizeof(stude_node));
	*s = stu;
	s->next = h->next;
	h->next = s;

	//�����ļ�
	savef_student(&head);

	printf("��ӳɹ�\n");
}