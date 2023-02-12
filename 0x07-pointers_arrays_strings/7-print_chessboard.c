#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: Chars the represent the pieces
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x <= 8; x++)
		{
			if (x == 8)
				putchar('\n');
			else
				putchar(a[y][x]);
		}
	}
}
