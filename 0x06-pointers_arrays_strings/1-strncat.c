#include "main.h"

/**
 * _strncat - Function that conatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: paramater 3
 *
 * Return: return the value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
	}
		j++;
	}
	return (dest);
}
