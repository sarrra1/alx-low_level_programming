#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data we want to insert into the new node
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temporary = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	while (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temporary->next != NULL)
	{     
	      temporary = temporary->next;
	}

        temporary->next = newNode;
       
        return (newNode);
}
