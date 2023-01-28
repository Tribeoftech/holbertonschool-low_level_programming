#include "main.h"
/**
 * print_alphabet_x10 - Task 2 program that prints the alphabet x10
 * main - Entry
 * Return: 0 (Successful)
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
	putchar('\n');
	}
}
