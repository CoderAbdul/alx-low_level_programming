#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - a function that prints numbers folowed by a new line
 * @separator: string to be printed between numbers
 * @n: number of int pased to into the function
 *
 * REturn: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);

	for (; i < n; i++)
	{
		printf("%i", va_arg(valist, int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
