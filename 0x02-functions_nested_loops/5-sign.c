#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @x: a character to be checked
 *
 * Return: 1, 0, -1, depending on the condition
 */
int print_sign(int x)
{
	if (x > 0)

{
	_putchar('+');
	return (1);
}
	else if (x == 0)

{
	_putchar('0');
	return (0);
}
	else

{
	_putchar('-');
	return (-1);
}
}
