#include "main.h"

/**
 * _strchr - A function that locates character in a string
 * @s: parameter 1, string to find
 * @c: parameter 2,  the char we are looking for
 *
 * Return: return s
 */

char *_strchr(char *s, char c)
{	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] ==  c)
			return (&s[a]);
	}
	return (s);
}
