#include "main.h"
#include <stdio.h>
/**
 * _isalpha - see description
 * @c: number
 * Description: Print alpha 10 times
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
