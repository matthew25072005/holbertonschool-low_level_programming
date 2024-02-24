#include "main.h"

/**
*puts_half - sii
*@s: The string to be modified
*/

void puts_half(char *s)
{
	int a = 5, b;

	while (s[a] != '\0')
		a++;

	a--;

	for (b = 5; b <= a; b++)
		_putchar(s[b]);

	_putchar('\n');
}
