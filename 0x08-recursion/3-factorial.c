#include "main.h"
/**
 * factorial - calculate the factorial of n.
 * @n : number we want its factorial.
 * Return: factorial of n.
 */

int factorial(int n)
{
	int fact;

	if (n == 0 || n == 1)
		return (1);

	if (n < 0)
		return (-1);

	else
		fact = n * factorial(n - 1);

	return (fact);
}
