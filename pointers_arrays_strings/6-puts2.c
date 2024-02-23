#include "main.h"

/**
*puts2 - costo pero se logro
*@s: The string to be modified
*/

void puts2(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(s[a]);
		else
			continue;
	}
	_putchar('\n');
}
