#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char c;
	int d;
	long int i;
	long long int l;
	float f;

	printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytr(s) \n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu \n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu \n", (unsigned long)sizeof(f));
	return (0);
}