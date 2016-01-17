#include <stdlib.h>
#include <string.h>

#include "debug.h"
#include "SLL.h"

NODE *SLL_CreateNewNode(int newData)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));

	newNode->data = newData;
	newNode->nextNode = NULL;

	return newNode;
}

void SLL_DestroyNode(NODE **node)
{
	if(*node)
	{
		free(*node);
		*node = NULL;
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
	NODE *curNode = NULL;

	if(*head == rmNode)
	{
		*head = rmNode->nextNode;
	}
	else
	{
		curNode = *head;
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

void SLL_InsertAfter(NODE *curNode, NODE *newNode)
{
	newNode->nextNode = curNode->nextNode;
	curNode->nextNode = newNode;
}

void SLL_InsertNewHead(NODE **head, NODE *newHead)
{
	if(NULL == *head)
	{
		*head = newHead;
	}
	else
	{
		newHead->nextNode = *head;
		*head = newHead;
	}
}

int SLL_GetNodeCount(NODE *head)
{
	NODE *curNode = head;
	int nodeCnt = 0;

	while( NULL != curNode )
	{
		nodeCnt++;
		curNode = curNode->nextNode;
	}

	return nodeCnt;
}

void SLL_ShowAll(NODE *head)
{
	int i =0, nodeCnt = 0;
	NODE *curNode = NULL;

	if(head)
	{
		nodeCnt = SLL_GetNodeCount(head);
		for(i = 0; i < nodeCnt; i++)
		{
			curNode = SLL_GetNodeAt(head, i);
			dlp("list[%d]: %d\n", i, curNode->data);
		}
	}
}

