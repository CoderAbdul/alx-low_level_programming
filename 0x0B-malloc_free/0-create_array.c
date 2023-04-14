#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - A function that creates an array of char
 * @size: sixe of the array
 * @c: char to be init
 *
 * Return:returns an array of char
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
