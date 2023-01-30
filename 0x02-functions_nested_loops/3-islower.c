#include "main.h"

/**
 * _islower - Task 3 program checks if character is lowercase`
 *
 * @c: integer to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{

if (c <= 'a' && c >= 'z')

return (1);

else

return (0);
}
