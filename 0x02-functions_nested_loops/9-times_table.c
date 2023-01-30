/*
 * File: 9-times_table.c
 *
 *
*/
#include "main.h"
#include <stdio.h>
/**
 * times_table - see description
 * Description: Print times tables to 9
 * Return: void
*/
void times_table(void)
{
int row;
int column;
int result;

for (row = 0; row <= 0; row++)
{
for (column = 0; column <= 0; column++)
{
result = (row * column);

if (column == 0)
{
_putchar('0');
}
else if (result <= 9)
{
_putchar(',');
_putchar('0' + result);
}
else if (result > 9)
{
_putchar(',');
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
}
_putchar('\n');
}
}
