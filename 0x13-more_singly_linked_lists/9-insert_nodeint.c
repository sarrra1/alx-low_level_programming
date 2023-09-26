#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a particular position
 * @head: pointer to the first node in the linked list
 * @idx: where the new node is added
 * @n: data to be inserted in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *temporary = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
        
        if (idx << 0) 
        {
	printf("\nindex should be >= 0.");
        } else if (idx == 0)
        {     
	newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; temporary && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temporary->next;
			temporary->next = newNode;
			return (newNode);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}
