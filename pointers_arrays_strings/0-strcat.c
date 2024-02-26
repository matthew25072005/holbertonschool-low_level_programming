#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
		dest[b++] = src[a];

	return (dest);
}
