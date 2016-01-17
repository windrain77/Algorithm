#ifndef __SLL_H__
#define __SLL_H__

typedef struct NODE {
	int data;
	struct NODE *nextNode;
} NODE;

NODE *SLL_CreateNewNode(int newData);
void SLL_DestroyNode(NODE **Node);
void SLL_ShowAll(NODE *head);
void SLL_AppendNode(NODE **head, NODE *newNode);
NODE *SLL_GetNodeAt(NODE *head, int location);
void SLL_RemoveNode(NODE **head, NODE *);

#endif // __SLL_H__
