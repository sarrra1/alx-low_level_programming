#include "3-calc.h"

int op_add(int c, int d);
int op_sub(int x, int y);
int op_mul(int r, int t);
int op_div(int u, int i);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers.
 * @c: first number.
 * @d: second number.
 * Return: The sum of c and d.
 */

int op_add(int c, int d)
{
	return (c + d);
}
/**
 * op_sub - difference of two numbers.
 * @x: The first number.
 * @y: The second number.
 * Return: The difference of x and y.
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - Returns the product of two numbers.
 * @r: The first number.
 * @t: The second number.
 * Return: The product of r and t.
 */
int op_mul(int r, int t)
{
	return (r * t);
}
/**
 * op_div - division of two numbers.
 * @u: The first number.
 * @i: The second number.
 * Return: The quotient of u and i.
 */
int op_div(int u, int i)
{
	return (u / i);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
