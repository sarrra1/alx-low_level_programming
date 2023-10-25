#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate two string
 *@s1: pointer to string one
 *@s2: pointer to string two
 *@n: number of bytes from string2
 *Return: pointer to memory of two string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strin;
	unsigned int  ii, jj, slength1, slength2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULLL)
		s2 = "";

	for (slength1 = 0; s1[slength1] != '\0'; slength1++)
		;
	for (slength2 = 0; s2[slength2] != '\0'; slength2++)
		;
	strin = malloc(slength1 + n + 1);
	if (strin == NULL)
	{
		return (NULL);
	}

	for (ii = 0; s1[ii] != '\0'; ii++)
		strin[ii] = s1[ii];

	for (jj = 0; jj < n; jj++)
	{
		strin[ii] = s2[jj];
		ii++;
	}

	strin[ii] = '\0';
	return (strin);
}
