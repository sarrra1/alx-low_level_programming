#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * checknumber - check - string there are digit
 * @st: array st
 *
 * Return: Always 0
 */

int checknumber(char *st)
{
	unsigned int cunt;

	cunt = 0;
	while (cunt < strlen(st)) 

	{
		if (!isdigit(st[cunt])) 
		{
			return (0);
		}

		cunt++;
	}
	return (1);
}

/**
 * main - Print the sum
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
	int cunt;
	int strint;
	int summ = 0;

	cunt = 1;
	while (cunt < argc) 
	{
		if (checknumer(argv[cunt]))

		{
			strint = atoi(argv[cunt]); 
			summ += strint;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		cunt++;
	}

	printf("%d\n", summ); 

	return (0);
}
