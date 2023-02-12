#include "main.h"
/**
* _strspn - search a string for bytes
* @string: a astring
* @accept: bytes we're looking for
*
* Return: number of bytes to find it
*/
unsigned int _strspn(char *string, char *accept)
{
	unsigned int address1 = 0;
	unsigned int address2;
	unsigned int place = 0;

	while (*(accept + address1))
	{
		address2 = 0;

		while (*(string + address2) != 32)
		{
			if (*(accept + address1) == *(string + address2))
				place++;
			address2++;
		}

		address1++;
	}

	return (place);
}
