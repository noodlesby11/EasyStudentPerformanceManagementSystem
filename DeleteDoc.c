#include"student.h"
void DeleteDoc(stude_node* p, int num)
{
	stude_node* ptr1, * ptr2;

	/*要删除的结点为表头结点*/
	while (p != NULL && p->num == num)
	{
		ptr2 = p;
		p = p->next;
		free(ptr2);
	}

	/*链表为空时*/
	if (p == NULL)
		return NULL;

	/*要删除结点为非表头结点*/
	ptr1 = p;
	ptr2 = p->next;
	/*从表头的下一个结点搜索所有符合删除要求的结点*/
	while (ptr2 != NULL)
	{
		/*ptr2所指结点符合要求*/
		if (ptr2->num == num)
		{
			ptr1->next = ptr2->next;
			free(ptr2);
		}
		else
			ptr1 = ptr2;//ptr1后移一个结点

		ptr2 = ptr1->next;//ptr2指向ptr1的后一个结点
	}
	savef_student(p);//保存文件
}

