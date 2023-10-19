#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frreees a linked list
 * @head: list_t liisst we freed
 */
void free_list(list_t *head)
{
	list_t *temporary;

	do {
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	} while (head);
}
