#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator:  the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *tmp;

	va_start(valist, n);

	for (; i < n; i++)
	{
		tmp = va_arg(valist, char *);

		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
