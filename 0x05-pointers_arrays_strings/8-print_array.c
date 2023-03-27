#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
{
	printf("%d", a[x]);

	if (x == n - 1)
		continue;
	printf(", ");
}
	printf("\n");
}
