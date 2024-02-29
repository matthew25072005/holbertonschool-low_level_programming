#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int a, b = 0, c = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] || s2[a]; a++)
		c++;

	concat_str = malloc(sizeof(char) * c);

	if (concat_str == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		concat_str[b++] = s1[a];

	for (a = 0; s2[a]; a++)
		concat_str[b++] = s2[a];

	return (concat_str);
}
