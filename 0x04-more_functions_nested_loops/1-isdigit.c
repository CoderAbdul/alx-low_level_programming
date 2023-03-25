#include "main.h"

/**
 * _isdigit - checks for a digit (o through 9)
 * @x: parameter
 * Return: return 1 and  0.
 */
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	return (1);
	else
	return (0);
}
