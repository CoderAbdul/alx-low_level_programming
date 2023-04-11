#include "main.h"

/**
 * natural_sqrt - Main entry
 * @i; int
 * @j: int
 *
 * Return: return natural sqrt
 */

int natural_sqrt(int i. int j)
{
	int a;

	if (i < 0)
	{
		return (-1);
	}
	else if ((j * j) > i)
	{
		return (-1);
	}
	else if ((j * j) == i)
	{
		return (j);
	}
	else
	{
		a = natural_sqrt(i, j + 1);
		return (a);
	}
}

/**
 * _sqrt_recursion - A function that return
 * the natural square root of a number
 * @n: parameter, int n
 *
 * Return: return natural square root
 */

int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 1));
}
