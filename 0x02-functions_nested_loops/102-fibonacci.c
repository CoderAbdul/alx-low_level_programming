#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: returns 0
 */

int main(void)
{
	long int x, y, z, sum;

	y = 1;
	z = 2;

	for (x = 1; x <= 50; ++x)
{
	if (y != 20365011074)
{
	printf("%ld, ", y);
}
	else
{
	printf("%ld\n", y);
}
	sum = y + z;

	y = z;
	z = sum;
}
	return (0);
}
