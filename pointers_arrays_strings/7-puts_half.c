#include "main.h"

/**
*puts_half - sii
*@s: The string to be modified
*/

void puts_half(char *s)
{
	int a = 0, b;

	while (s[a] != '\0')
		a++;

	a--;

	if ((b % 2) == 0)
		n = b / 2;


	for (b = 5; b <= a; b++)
		_putchar(s[b]);

	_putchar('\n');
}
