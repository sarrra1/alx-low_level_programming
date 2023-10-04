#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int i, u = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (u == NULL)
		return (NULL);

	for (u = 0; str[u]; u++)
		x[u] = str[u];

	return (x);
}
