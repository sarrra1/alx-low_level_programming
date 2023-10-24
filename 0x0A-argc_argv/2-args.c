#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sara_o;

	for (sara_o = 0; sara_o < argc; sara_o++)
	{
		printf("%s\n", argv[sara_o]);
	}

	return (0);
}	
