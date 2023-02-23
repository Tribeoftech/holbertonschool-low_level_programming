#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies string point to by src
* @src: string being copied
* @dest: return value
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int f1 = 0;

while (src[f1])
{
*(dest + f1) = *(src + f1);
f1++;
}
dest[f1] = '\0';
return (dest);
}
