#include <stdlib.h>
#include <string.h>

#include "debug.h"
#include "SLL.h"

NODE *SLL_CreateNewNode(int newData)
{
	NODE *NewNode = (NODE*)malloc(sizeof(NODE));

	NewNode->data = newData;
	NewNode->nextNode = NULL;

	return NewNode;
}

void SLL_DestroyNode(NODE **Node)
{
	if(*Node)
	{
		free(*Node);
		*Node = NULL;
	}
}

void SLL_AppendNode(NODE **head, NODE *newNode)
{
	/*If head is NULL, then newNode is head*/
	if(NULL == *head)
	{
		*head = newNode;
	}
	else
	{
		/*Find tail and connect new node*/
		NODE *tail = *head;
		while(NULL != tail->nextNode)
		{
			tail = tail->nextNode;
		}

		tail->nextNode = newNode;
	}
}
