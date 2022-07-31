#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//定义结点
typedef struct stude_node
{
	//学生个人信息
	int num;
	char name[10];
	//学生课程成绩
	int gaoshu, xiandai, yinyu;

	struct stude_node* next;
}stude_node;
stude_node head;//建立链表
