#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: args
 *
 * Return: the value of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	if (n)
	{
		va_start(valist, n);

		for (; i < n; i++)
			sum += va_arg(valist, int);
		va_end(valist);
	}
	return (sum);
}
