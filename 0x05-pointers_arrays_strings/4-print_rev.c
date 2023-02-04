#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
    if (*s)
    {
        print_rev(s + 1);
        putchar(*s);
    }
}



