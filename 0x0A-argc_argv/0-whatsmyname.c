#include <stdio.h>
#include "main.h"

/**
 * main - print name ofprogram
 * @argc: num arguments
 * @argv: arr arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	/*print name of program*/
	printf("%s\n", *argv);

	return (0);
}
