#include <stdio.h>

/**
 * main - A program that prints the sum of name of
 * the file it was complied from.
 *
 * Return: return 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
