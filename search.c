#include"student.h"
stude_node* search_student2(stude_node* p, char name[]);
//ͨ��ѧ�Ų���
stude_node* search_student1(stude_node* p, int num)
{
	stude_node* ptr = p;

	while (ptr->next != NULL)
	{
		if (ptr->next->num == num)
		{
			return ptr->next;
		}
		ptr = ptr->next;
	}
	return NULL;
}

//ͨ����������
stude_node* search_student2(stude_node* p, char name[])
{
	stude_node* ptr = p;

	while (ptr->next != NULL)
	{
		if (strcmp(name, ptr->next->name) == 0)
		{
			return ptr->next;
		}
		ptr = ptr->next;
	}
	return NULL;
}
