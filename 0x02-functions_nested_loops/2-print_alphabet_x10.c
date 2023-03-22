#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabet
 *
 */
void print_alphabet_x10(void)
{
	int j;
	int c;

	for (j = 0; j < 10; j++)
{

	for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
	_putchar('\n');
}
}
