#ifndef __SLL_H__
#define __SLL_H__

typedef struct NODE {
	int data;
	struct NODE *nextNode;
} NODE;

NODE *SLL_CreateNewNode(int newData);
void SLL_DestroyNode(NODE **node);
void SLL_AppendNode(NODE **head, NODE *newNode);
NODE *SLL_GetNodeAt(NODE *head, int location);
void SLL_RemoveNode(NODE **head, NODE *rmNode);
void SLL_InsertAfter(NODE *curNode, NODE *newNode);
void SLL_InsertNewHead(NODE **head, NODE *newHead);
int  SLL_GetNodeCount(NODE *head);
void SLL_ShowAll(NODE *head);

#endif // __SLL_H__
