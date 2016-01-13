#include <stdio.h>
#include <stdlib.h>

#include "debug.h"

#include "SLL.h"

int main(int argc, char **argv)
{
	dlp("Hello SLL\n");

	NODE *List = NULL;
	NODE *NewNode = NULL;

	NewNode = SLL_CreateNewNode(117);
	SLL_AppendNode(&List, NewNode);

	NewNode = SLL_CreateNewNode(119);
	SLL_AppendNode(&List, NewNode);

	while(List != NULL)
	{
		dlp("(%p)ListData : %d \n", List, List->data);
		List = List->nextNode;
	}

	return 0;
}

