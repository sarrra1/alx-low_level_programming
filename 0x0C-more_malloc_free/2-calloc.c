#include "main.h"

/**
 * _calloc - allocates memory for an array initialized to 0
 * @nmemb: number of elemennts
 * @size: byte size off an element
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pint;

	if (!nmemb || !size)
		return (NULL);
	pint = malloc(nmemb * size);
	while (!pint)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		pint[nmemb] = 0;
	return (pint);
}
