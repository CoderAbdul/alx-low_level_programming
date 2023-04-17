#include "main.h"

/**
 * prime_num - evalute is a number is prime
 * @n: value to evaluate
 * @j: count
 *
 * Return: return 1 and 0
 */

int prime_num(int n, int j)
{
	if (j == 1)
		return (0);
	if (n % j == 0 && j > 0)
		return (0);
	return (prime_num(n, j - 1));
}

/**
 * is_prime_number - A function that returns 1 if the int is a prime number
 * otherwise return 0
 * @n: parameter, int
 *
 * Return: return 1 0r 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_num(n, n - 1));
}
