#include <ctype.h>

/**
*_islower - its true
*Return: 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
