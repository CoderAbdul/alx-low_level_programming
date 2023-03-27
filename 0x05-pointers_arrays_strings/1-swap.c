#include "main.h"

/**
 * swap_int - Swap the values of two intergers numbers
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
