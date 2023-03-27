#include <stdio.h>
/**
 * main - Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000
 * Return: 0
 */

int main(void)
{
	int x = 1, y = 2, sum = 0;
	int z;

	while (y < 4000000)
{
	if (y % 2 == 0)
	sum += y;
	z = y;
	y += x;
	x = z;
}
	printf("%d\n", sum);
	return (0);
}
