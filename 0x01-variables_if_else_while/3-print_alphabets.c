#include <stdio.h>
/**
 * main - prints alphabet l,U case.
 *
 *
 * Return: 0 if runs succesful
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
