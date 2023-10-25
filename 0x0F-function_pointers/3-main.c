#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numB1, numB2;
	char *oper;

	if (argc != 4)
	{
		printf("fail\n");
		exit(98);
	}

	numB1 = atoi(argv[1]);
	oper = argv[2];
	numB2 = atoi(argv[3]);

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("fail\n");
		exit(99);
	}

	if ((*oper == '/' && numB2 == 0) ||
	    (*oper == '%' && numB2 == 0))
	{
		printf("fail\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oper)(numB1, numB2));

	return (0);
}
