#include "main.h"

/**
 * print_line - Draws a straight line on the terminal
 * @n: parameter
 *
 * Return: returns 0
 */
void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	int x;

	for (x = 1; x <= n; x++)
{
	_putchar(95);
}
	_putchar('\n');
}
}
