#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

#include "SLL.h"

int main(int argc, char **argv)
{
	dlp("Hello SLL\n");

	NODE *List = NULL;
	NODE *MyNode = NULL;

	SLL_AppendNode(&List, SLL_CreateNewNode(117));
	SLL_AppendNode(&List, SLL_CreateNewNode(119));
	SLL_AppendNode(&List, SLL_CreateNewNode(212));

	MyNode = SLL_GetNodeAt(List, 1);
	dlp("MyNode: %d \n", MyNode->data);

	dlp("Befor Remove\n");
	SLL_ShowAll(List);

	SLL_RemoveNode(&List, MyNode);
	SLL_DestroyNode(&MyNode);
	
	dlp("Befor Remove\n");
	SLL_ShowAll(List);

	return 0;
}

