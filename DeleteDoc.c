#include"student.h"
void DeleteDoc(stude_node* p, int num)
{
	stude_node* ptr1, * ptr2;

	/*Ҫɾ���Ľ��Ϊ��ͷ���*/
	while (p != NULL && p->num == num)
	{
		ptr2 = p;
		p = p->next;
		free(ptr2);
	}

	/*����Ϊ��ʱ*/
	if (p == NULL)
		return NULL;

	/*Ҫɾ�����Ϊ�Ǳ�ͷ���*/
	ptr1 = p;
	ptr2 = p->next;
	/*�ӱ�ͷ����һ������������з���ɾ��Ҫ��Ľ��*/
	while (ptr2 != NULL)
	{
		/*ptr2��ָ������Ҫ��*/
		if (ptr2->num == num)
		{
			ptr1->next = ptr2->next;
			free(ptr2);
		}
		else
			ptr1 = ptr2;//ptr1����һ�����

		ptr2 = ptr1->next;//ptr2ָ��ptr1�ĺ�һ�����
	}
	savef_student(p);//�����ļ�
}

