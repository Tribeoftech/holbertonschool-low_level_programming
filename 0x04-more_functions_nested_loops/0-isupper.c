#include "main.h"
#include <stdio.h>
/**
* _isupper - checks for uppercase character
*
* @c: letter
*
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (c < 65 && c > 97)
			{
			return (1);
	}
	else
		return (0);
}
