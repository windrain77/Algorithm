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

	MyNode = SLL_GetNodeAt(List, 1);
	dlp("MyNode: %d \n", MyNode->data);

	return 0;
}

