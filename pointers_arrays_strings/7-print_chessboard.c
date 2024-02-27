#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a[a][7]; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[a][b]);

		_putchar('\n');
	}
}
