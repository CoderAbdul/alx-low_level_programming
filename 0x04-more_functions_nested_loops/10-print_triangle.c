#include "main.h"

/**
 * print_triangle - Prints a triangle on the screen
 * @size: parameter
 *
 * Return: returns 0
 */

void print_triangle(int size)
{
	if (size <= 0)

{
	_putchar('\n');
}
	else
{
	int x, y;

	for (x = 1; x <= size; x++)
{
		for (y = x; y < size; y++)
{
		_putchar(' ');
}
		for (y = 1; y <= x; y++)
{
		_putchar('#');
}
	_putchar('\n');
}
}
}
