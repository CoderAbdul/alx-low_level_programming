#include "main.h"

/**
 * _pow_recursion - A function that returns the
 * value of x raised to the power of y
 * @x: parameeter 1, integer value
 * @y: parameter 2, power to be raised to
 *
 * Return: The value of x and -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
		return (i);
	}
}
