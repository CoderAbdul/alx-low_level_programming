#include "main.h"

/**
 * _memset - A function that fills the first byte
 * @s: parameter 1, pointer of memory area
 * @n: parameter 2, the number of byte
 * @b: parameter 3, constant byte
 *
 * Return: return the value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
