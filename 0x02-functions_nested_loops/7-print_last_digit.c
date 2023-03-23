#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: parameter
 *
 * Return: return last digit
 */
int print_last_digit(int x)
{
	x %= 10;
	if (x < 0)

{
	_putchar(-x + '0');
	return (-x);
}
	else
{
	_putchar(x + '0');
	return (x);
}
}
