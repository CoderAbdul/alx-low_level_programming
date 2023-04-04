#include "main.h"

/**
 * _memcpy -A function that copies memory area
 * @src: parameter 1, the memory sphere to copy from
 * @n: parameter 2, the number of bytes
 * @dest: parameter 3, where to copy memory to
 *
 * Return: return the value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
