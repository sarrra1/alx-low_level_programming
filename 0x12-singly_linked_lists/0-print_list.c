#include <stdio.h>
#include "lists.h"

/**
 * print_list : prints elements of a linked list
 * @h: pointer 
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{       printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		x++;
	}

	return (x);
}
