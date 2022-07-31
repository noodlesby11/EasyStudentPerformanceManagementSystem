#include"student.h"
int main()
{
	while (1)
	{
		//菜单栏
		system("cls");
		printf("     班级学生成绩管理系统     \n");
		printf("             菜单             \n");
		printf("            1.查询            \n");
		printf("            2.添加            \n");
		printf("            3.修改            \n");
		printf("            4.删除            \n");
		printf("            0.退出            \n");
		//读取文件保存至链表
		fread_student(&head);
		//直接读取字符不需要按回车键
		char ch = getch();
		switch (ch)
		{
			case'1'://查询学生成绩
			{
				int choice;
				system("cls");//清屏
				printf("请选择查询方式:\n");
				printf("1.学号 2.姓名\n");
				scanf("%d", &choice);
				switch (choice)
				{

				case 1://通过学号查询
				{
					int n;
					printf("请输入学号:\n");
					scanf("%d", &n);
					
					stude_node* p = search_student1(&head, n);
					if (p != NULL)
					{
						printf("学号\t姓名 高等数学 线性代数 大学英语\n");
						printf("%ld\t%s    %d       %d       %d\n", p->num, p->name, p->gaoshu, p->xiandai, p->yinyu);
					}
					else
						printf("未找到该学生信息\n");
				}
				break;
				case 2://通过姓名查询
				{
					char name[10];
					printf("请输入姓名：\n");
					scanf("%s", name);

					//调用姓名查询函数，与学号同理
					stude_node* p = search_student2(&head, name);
					if (p != NULL)
					{
						printf("学号\t姓名 高等数学 线性代数 大学英语\n");
						printf("%ld\t%s    %d       %d       %d\n", p->num, p->name, p->gaoshu, p->xiandai, p->yinyu);
					}
					else
						printf("未找到该学生信息\n");
				}
				break;
				default:
					printf("选择错误\n");
					break;
				}
			}
			break;

			case'2'://添加学生成绩
			{
				system("cls");//清屏
				add_student(&head);//调用添加函数
			}
			break;

			case'3'://修改学生成绩
			{
				int n;
				system("cls");
				printf("请输入要修改的学生学号:\n");
				scanf("%d", &n);

				modify_student(n);//调用修改函数

				break;
			}

			case'4'://删除学生成绩
			{
				int num, choice;
				system("cls");

				//先通过查询显示学生信息
				printf("请输入学号；\n");
				scanf("%d", &num);
				stude_node* p = search_student1(&head, num);
				if (p != NULL)
				{
					printf("学号\t姓名 高等数学 线性代数 大学英语\n");
					printf("%ld\t%s    %d       %d       %d\n", p->num, p->name, p->gaoshu, p->xiandai, p->yinyu);
				}
				else if (p == NULL)
				{
					printf("未找到该学生信息\n");
					break;
				}
				//请求再次确认
				printf("是否确认删除？\n");
				printf("1.确认 2.取消\n");
				scanf("%d", &choice);

				//确认删除，调用删除函数删除学生信息
				if (choice == 1)
				{
					DeleteDoc(&head, num);
					printf("删除成功\n");
				}
				//确认取消，不执行动作
				else if (choice == 2)
				{
					printf("取消成功\n");
				}
			}
		break;

		case'0'://退出系统
			return 0;

		default:
			printf("选择错误，请重新输入\n");
		}

		//询问是否退出系统
		printf("\n是否继续操作？\n");
		printf("1.是 2.否\n");
		int flag = 1;
		scanf("%d", &flag);
		if (flag == 2)
			return 0;
	}
	return 0;
}