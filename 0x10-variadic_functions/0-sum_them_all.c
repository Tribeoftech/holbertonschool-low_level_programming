#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of passed arguments
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int count;
int sum = 0;
if (n == 0)
{
return (0);
}
va_start(ap, n);
for (count = 0; count < n; count++)
{
sum = sum + va_arg(ap, int);
}
va_end(ap);
return (sum);
}
