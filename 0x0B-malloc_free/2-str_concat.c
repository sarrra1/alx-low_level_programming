#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2,NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *conctenate;
	int size1 = 0;
	int size2 = 0;
	int size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

        size = size1 + size2;

	conctenate = malloc(sizeof(char) * (size + 1));

	if (conctenate == NULL)
		return (NULL);
	size1 = size2 = 0;
	while (s1[size1] != '\0')
	{
		conctenate[size1] = s1[size1];
		size1++;
	}

	while (s2[size2] != '\0')
	{
		conctenate[size1] = s2[size2];
		size1++, size2++;
	}
	conctenate[size1] = '\0';
	return (conctenate);
}
