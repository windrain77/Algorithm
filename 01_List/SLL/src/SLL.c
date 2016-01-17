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

void SLL_ShowAll(NODE *head)
{
	NODE *curNode = head;
	while(curNode)
	{
		dlp("data: %p-%d\n", (void*)curNode, curNode->data);
		curNode = curNode->nextNode;
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

NODE *SLL_GetNodeAt(NODE *head, int location)
{
	NODE *current = head;

	while(current != NULL && (--location) >= 0)
	{
		current = current->nextNode;
	}

	return current;
}

void SLL_RemoveNode(NODE **head, NODE *rmNode)
{
	if(*head == rmNode)
	{
		*head = rmNode->nextNode;
	}
	else
	{
		NODE *curNode = *head;
		while( (NULL != curNode) && (curNode->nextNode != rmNode) )
		{
			curNode = curNode->nextNode;
		}

		if(NULL != curNode)
		{
			curNode->nextNode = rmNode->nextNode;
		}
	}
}
