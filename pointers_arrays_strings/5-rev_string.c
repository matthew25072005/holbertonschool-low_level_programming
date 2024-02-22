#include "main.h"

/**
* rev_string - Reverses a string
* @s: The string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
	int a = 0, b;

	char letra;
	while (s[a] != '\0')	
		a++;
	a--;

	for (b = 0; b <= a / 2; b++)
	{
		letra = s[b];
		s[b] = s[a - b];
		s[a - b] = letra;
	}
}
