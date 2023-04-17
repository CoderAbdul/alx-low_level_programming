#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter
 *
 * @str: the str to copy
 *
 * Return: return NULL of te str is empty
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	cpy = malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)
		return (NULL);

	while (str[j])
	{
		cpy[j] = cpy[j];
		j++;
	}

	cpy[j + 1] = 0;
	return (cpy);
}
