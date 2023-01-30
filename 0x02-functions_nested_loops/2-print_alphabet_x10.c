#include "main.h"
/**
 * print_alphabet_x10 - Task 2 program that prints the alphabet x10
 * main - _putchar(c)
 * Return: 0 (Successful)
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
