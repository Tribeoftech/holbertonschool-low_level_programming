#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s);
{
int i, j, k, l, m;
i = j = k = l = m = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
j++;
if (s[i] >= '0' && s[i] <= '9')
{
k = k * 10 + (s[i] - '0');
l = 1;
}
else if (l == 1)
break;
i++;
}
if (j % 2 != 0)
k = -k;
return (k);
}

