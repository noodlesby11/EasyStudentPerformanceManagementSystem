#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//������
typedef struct stude_node
{
	//ѧ��������Ϣ
	int num;
	char name[10];
	//ѧ���γ̳ɼ�
	int gaoshu, xiandai, yinyu;

	struct stude_node* next;
}stude_node;
stude_node head;//��������
