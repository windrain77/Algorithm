#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

#include "SLL.h"

int main(int argc, char **argv)
{
	dlp("Hello SLL\n");

	NODE *List = NULL;

	SLL_AppendNode(&List, SLL_CreateNewNode(117));
	SLL_AppendNode(&List, SLL_CreateNewNode(119));
	SLL_AppendNode(&List, SLL_CreateNewNode(212));

	dlp("Befor Insert\n");
	SLL_ShowAll(List);
	dlp("count: %d\n\n", SLL_GetNodeCount(List));

	dlp("Insert new node\n\n");
	SLL_InsertAfter(SLL_GetNodeAt(List, 1), SLL_CreateNewNode(300));
	
	dlp("After Insert\n");
	SLL_ShowAll(List);
	dlp("count: %d\n\n", SLL_GetNodeCount(List));

	return 0;
}

