#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to allocated space of size b
 * @b: size of new space
 *
 * Return: pointer to new space
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
