#include "main.h"

/**
*
*
*/

void puts2(char *s)
{
	int a = 0, b;

	while (s[a] != '\0')
		a++;

	a--;

	for (b = 0; b <= a; b++)
	{
		s[b] = s[a];
	}
}
