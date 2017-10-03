#include "holberton.h"

/**
  * print_chessboard - prints a chessboard that's 8 by 8
  * @a: the array we read from (where the chess pieces are)
  * Return: nothing, void
  */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
