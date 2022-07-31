#include"student.h"
void modify_student(int num)
{
	//先找到并显示出学生的信息
	stude_node* s = search_student1(&head, num);
	if (s == NULL)
	{
		printf("未查到相应学生信息\n");
		return;
	}
	printf("学号\t姓名 高等数学 线性代数 大学英语\n");
	printf("%ld\t%s    %d       %d       %d\n", s->num, s->name, s->gaoshu, s->xiandai, s->yinyu);

	//选择修改的项目（除了学号）并修改,通过循环可以不止修改一次
	while (1)
	{
		printf("请选择要修改的项目\n");
		printf("1.姓名\n");
		printf("2.高等数学成绩\n");
		printf("3.线性代数成绩\n");
		printf("4.大学英语成绩\n");
		int flag;
		scanf("%d", &flag);
		switch (flag)
		{
		case 1:
		{
			printf("请输入修改后的姓名：\n");
			scanf("%s", s->name);
			printf("修改成功\n");
		}
		break;
		case 2:
		{
			printf("请输入修改的高等数学成绩;\n");
			scanf("%d", &s->gaoshu);
			printf("修改成功\n");
		}
		break;
		case 3:
		{
			printf("请输入修改的线性代数成绩:\n");
			scanf("%d", &s->xiandai);
			printf("修改成功\n");
		}
		break;
		case 4:
		{
			printf("请输入修改后的大学英语:\n");
			scanf("%d", &s->yinyu);
			printf("修改成功\n");
		}
		break;
		default:
			printf("请重新输入\n");
			break;
		}

		//询问是否退出循环
		int choice = 1;
		printf("是否继续修改？\n");
		printf("1.继续 2.退出\n");
		scanf("%d", &choice);
		if (choice = 2)
			break;
	}
	savef_student(&head);//修改完保存文件
}