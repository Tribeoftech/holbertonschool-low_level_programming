#include "3-calc.h"

/**
 * op_add - Addition function
 * @a: First int to add
 * @b: Second int to add
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: First int to subtract
 * @b: Second int to subtract
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication function
 * @a: First int to mult
 * @b: Second int to mult
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: First int to div
 * @b: Second int to div
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Modulus function
 * @a: First int to mod
 * @b: Second int to mod
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
