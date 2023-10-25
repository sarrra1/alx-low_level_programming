#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int s, j;
	char *a;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}

	s = atoi(argv[1]);

	if (s < 0)
	{
		printf("error\n");
		exit(2);
	}

	a = (char *)main;

	for (j = 0; j < s; j++)
	{
		if (j == s - 1)
		{
			printf("%02hhx\n", a[j]);
			break;
		}
		printf("%02hhx ", a[j]);
	}
	return (0);
}
