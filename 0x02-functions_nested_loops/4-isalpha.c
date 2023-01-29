#include "main.h"
#include <stdio.h>
/**
 * main-Entry- prints alphabet in lowercase
 * _isalpha- checks code
 *
 * Return: 0 if runs successful
 */
int _isalpha(int c);
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if ((c != 'e' && c != 'q'))
putchar(c);
}
putchar('\n');
return (0);
}
