#include <ctype.h>

/**
*_islower - its true
*Return: 0
*@c: The character to be checked.
*/

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}

		else
		{
		return (0);
		}
}
