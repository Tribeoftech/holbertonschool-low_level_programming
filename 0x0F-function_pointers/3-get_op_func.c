#include "3-calc.h"

/**
 * get_op_func - get an operation
 * @s: Operator
 * Return: none
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int x = 0;

	while (ops[x].op)
	{
		if ((s[0] == ops[x].op[0]) && (s[1] == '\0'))
		{
			return (ops[x].f);
		}
		x++;
	}
	return (NULL);
}
