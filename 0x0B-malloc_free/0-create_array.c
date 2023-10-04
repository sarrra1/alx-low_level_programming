#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c.
 * @size: size of array.
 * @c: char we want to initialize.
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *string;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	while (x < size)
	{
		string[x] = c;
		x++;
	}

	return (string);
}
