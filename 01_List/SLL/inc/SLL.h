#ifndef __SLL_H__
#define __SLL_H__

typedef struct NODE {
	int data;
	struct NODE *nextNode;
} NODE;

NODE *SLL_CreateNewNode(int newData);
void SLL_DestroyNode(NODE **Node);
void SLL_AppendNode(NODE **head, NODE *newNode);

#endif // __SLL_H__
