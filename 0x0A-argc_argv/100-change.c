#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 Success 1 Error
 */
int main(int argc, char *argv[])
{
	int numBER, I, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (numBER < 0)
	{
		printf("0\n");
		return (0);
	}

	for (I = 0; I < 5 && numBER >= 0; I++)
	{
		while (numBER >= coins[I])
		{
			result++;
			numBER -= coins[I];
		}
	}

	printf("%d\n", result);
	return (0);
}
