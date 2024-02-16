#include <stdio.h>

/**
*main - 0
*Return: 0
*/

int main(void)
{
	printf("_putchar\n");

	return (0);
}
