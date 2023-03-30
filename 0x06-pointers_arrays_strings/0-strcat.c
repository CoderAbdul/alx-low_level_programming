#include "main.h"

/**
 * _strcat - function concatenates two strings.
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 *
 * Return: return the value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
