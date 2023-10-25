#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: number of argguments
 * @argv: array of arggument
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
