#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;

	index--;

	for (; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
