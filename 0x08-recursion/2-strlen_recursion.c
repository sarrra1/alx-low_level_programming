#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s : the string we wants its length.
 * Return: the length of string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}

	return (length);
}
