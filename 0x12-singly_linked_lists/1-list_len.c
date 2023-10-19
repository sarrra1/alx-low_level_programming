#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the lenght of list
 * @h: pointer to the list_t 
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nuuum = 0;

	while (h)
	{
		nuuum++;
		h = h->next;
	}
	return (nuuum);
}
