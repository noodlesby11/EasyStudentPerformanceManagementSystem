#include"student.h"
void add_student()
{
	stude_node stu;
	/*查询要添加的学生信息是否已经
	存在,若不存在则要求输入其信息*/
	printf("请输入要添加学生的学号;\n");
	scanf("%d", &stu.num);
	stude_node* p = search_student1(&head, stu.num);
	if (p != NULL)
	{
		printf("该学生信息已存在\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", stu.name);
	printf("请输入高数成绩：\n");
	scanf("%d", &stu.gaoshu);
	printf("请输入线性代数成绩：\n");
	scanf("%d", &stu.xiandai);
	printf("请输入大学英语成绩：\n");
	scanf("%d", &stu.yinyu);

	/*先显示添加学生的信息，再通过头插法插入链表中*/
	printf("学号\t姓名 高等数学 线性代数 大学英语\n");
	printf("%ld\t%s    %d       %d       %d\n", stu.num, stu.name, stu.gaoshu, stu.xiandai, stu.yinyu);
	stude_node* h = &head;
	stude_node* s = (stude_node*)malloc(sizeof(stude_node));
	*s = stu;
	s->next = h->next;
	h->next = s;

	//保存文件
	savef_student(&head);

	printf("添加成功\n");
}