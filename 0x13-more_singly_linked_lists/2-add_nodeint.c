#include "lists.h"

/**
 * add_nodeint - adds a new node at the begginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: the address of the new element, or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	while (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
