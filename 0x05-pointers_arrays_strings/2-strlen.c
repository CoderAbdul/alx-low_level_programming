#include "main.h"

/**
 * _strlen - Rreturns the length of a string
 * @s: parameter
 * Return: return nothing
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
{
	x++;
}
	return (x);
}
