#include "main.h"

/**
*_print_rev_recursion - entry point
*@s: input
*return: always 0
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
_print_rev_recursion(s + 1);
else
return;
putchar(*s);
}
