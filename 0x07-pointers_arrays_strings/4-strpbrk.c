#include "main.h"
/**
* _strpbrk - search a string for set of bytes
* @string: source string
* @accepted_bytes: exactly what it says on the tin
*
* Return: blah blah blah
*/
char *_strpbrk(char *string, char *accepted_bytes)
{
	int address1 = 0;
	int address2;

	while (string[address1])
	{
		address2 = 0;

		while (accepted_bytes[address2])
		{
			if (string[address1] == accepted_bytes[address2])
			{
				string += address1;
				return (string);
			}

			address2++;
		}

		address1++;
	}

	return (string);
}
