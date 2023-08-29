#include "main.h"


/**
 * print_chessboard: print chess board
 * of the n*m dimanentional array
 *
 * @a: pointer to the array
 * of size 8
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((char) a[i][j]);
		}
		_putchar('\n');
	}
}

