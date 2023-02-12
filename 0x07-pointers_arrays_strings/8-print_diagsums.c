#include "main.h"

/**
 * set_string - Sets the VALUE of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
