#include "main.h"

/**
*puts_half - sii
*@s: The string to be modified
*/

void puts_half(char *s)
{
	int a = 0, b = 0, c;

	while (s[a++])
		b++;

	if ((b % 2) == 0)
		c = b / 2;

	else
		c = (b + 1) / 2;

	for (a = c; a < b; a++)
		_putchar(s[a]);

	_putchar('\n');
}
