#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiplies two numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: return 1 or 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
