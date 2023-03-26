#include "main.h"

/**
 * print_square - Prints a square
 * @size: parameter
 *
 * Return: returns 0
 */

void print_square(int size)
{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	int x, y;

	for (y = 1; y <= size; y++)
{
	for (x = 1; x <= size; x++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
