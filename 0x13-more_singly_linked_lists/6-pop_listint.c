#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *temporary;

	if (!head)
		return (0);
	if (!*head)
		return (0);

	number = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (number);
}
