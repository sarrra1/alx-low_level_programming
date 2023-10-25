#include <stdio.h>
#include "main.h"

/**
 * __atoi - converts a string to integer
 * @s: string to converted
 * Return: int converted from the string
 */
int __atoi(char *s)
{
	int i, u, n, length, f, digits;

	i = 0;
	u = 0;
	n = 0;
	length = 0;
	f = 0;
	digits = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++u;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digits = s[i] - '0';
			if (u % 2)
				digits = -digits;
			n = n * 10 + digits;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int result, numB1, numB2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numB1 = __atoi(argv[1]);
	numB2 = __atoi(argv[2]);
	result = numB1 * numB2;

	printf("%d\n", result);

	return (0);
}
