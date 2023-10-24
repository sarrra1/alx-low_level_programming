#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t the list we  want to free it
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (head)
	{
		temporary = head->next;
 /*we are using the free() function to release the memory
  *  that was reserved or allocated by the malloc() function.
  */
		free(head);
		head = temporary;
	}
}
