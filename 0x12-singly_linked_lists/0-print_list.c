#include <stdio.h>
#include "lists.h"

/**
 * print_list : prints elements of a linkked lists
 * @h: a pointer 
 * Return: the number of nodes that we prints
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

        while (h)
	{
		if (h->str)
		{	printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
		}
		else
			printf("[0] (nil)\n");
	}
  

	return (x);
}
