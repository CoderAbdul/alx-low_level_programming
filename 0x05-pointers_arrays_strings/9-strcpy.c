#include "main.h"

/**
 * * _strcpy - function that copies the string
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
{
	dest[x] = src[x];
	x++;
}
	dest[x] = '\0';
	return (dest);
}
