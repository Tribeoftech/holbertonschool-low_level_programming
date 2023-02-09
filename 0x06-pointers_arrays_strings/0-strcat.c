#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, d;

	for (i = 0; dest[i] != '\0'; i++)
	{
	for (d = 0; src[d] != '\0'; d++)
	{
	dest[i + d] = src[d];
	}
	}
	return (dest);
}
