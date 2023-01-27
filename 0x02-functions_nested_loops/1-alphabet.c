#include "main.h"
int main(void)
/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' ; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
