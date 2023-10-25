#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using pointer to a function
 * @name: string to adds
 * @f: pointer to function
 * Return: no thing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
