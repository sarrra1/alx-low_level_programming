#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sumation of linked list elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;
        
        if (head == NULL)
		return (0);

	while (temporary)
	{
		sum = sum + temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}
