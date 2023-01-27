#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0 if succesful
 *
 */
int print_alphabet(void)
{
int v;
for (v = 'a'; v <= 'z'; v++)
{
putchar(v);
}
putchar('\n');
return (0);
}
