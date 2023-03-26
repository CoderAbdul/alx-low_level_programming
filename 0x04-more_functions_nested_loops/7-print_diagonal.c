#include "main.h"

/**
 * print_diagonal - Prints diagonal line on the screen
 * @n: parameter
 *
 * Return: returns  0
 */

void print_diagonal(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	int x, y;

	for (x = 0; x < n; x++)
{
	for (y = 0; y < n; y++)
{
	if (y == x)
{	_putchar('\\');
	else if (y < x)
	_putchar(' ');
}
	_putchar('\n');
}
}
}
}
