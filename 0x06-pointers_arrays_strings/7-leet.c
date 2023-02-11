#include "holberton.h"
/**
 * leet - LEET GAMER BROOOO
 * @str: thwip thwip
 * Return: leet toop
 */
char *leet(char *str)
{
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};
	int count1 = 0, count2 = 0;

	while (str[count1])
	{
		count2 = 0;

		while (count2 < 5)
		{
			if (str[count1] == a[count2] || str[count1] - 32 == a[count2])
			{
				str[count1] = b[count2];
			}

			count2++;
		}

		count1++;
	}
return (str);
}
