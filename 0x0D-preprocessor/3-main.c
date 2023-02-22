#include <stdio.h>
#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d, %d\n", i, j);
	return (0);
}
