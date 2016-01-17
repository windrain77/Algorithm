#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

#include "SLL.h"

int main(int argc, char **argv)
{
	int i   = 0;
	int cnt = 0;
	NODE *List    = NULL;
	NODE *curNode = NULL;
	NODE *newNode = NULL;
	
	/** 노드 5개 추가 */
	for(i = 0; i < 5; i++)
	{
		newNode = SLL_CreateNewNode(i);
		SLL_AppendNode(&List, newNode);
	}

	newNode = SLL_CreateNewNode(-1);
	SLL_InsertNewHead(&List, newNode);

	newNode = SLL_CreateNewNode(-2);
	SLL_InsertNewHead(&List, newNode);

	/** 리스트 출력 */
	SLL_ShowAll(List);
	dlp("--------------------------------------------------\n");

	/** 리스트의 세 번째 노드 뒤에 새 노드 삽입 */
	curNode = SLL_GetNodeAt(List, 2);
	newNode = SLL_CreateNewNode(3000);
	SLL_InsertAfter(curNode, newNode);

	/** 리스트 출력 */
	SLL_ShowAll(List);
	dlp("--------------------------------------------------\n");

	/** 모든 노드를 메모리에서 제거 */
	dlp("Destroying List...\n");
	cnt = SLL_GetNodeCount(List);
	for(i = 0; i < cnt; i++)
	{
		curNode = SLL_GetNodeAt(List, 0);
		if(curNode)
		{
			SLL_RemoveNode(&List, curNode);
			dlp("Delete: %d\n", curNode->data);
			SLL_DestroyNode(&curNode);
		}
	}

	return 0;
}

