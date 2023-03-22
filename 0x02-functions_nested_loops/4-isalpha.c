#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @x: The character to be checked
 *
 * Return: 1 if character is either lower or upper case, and return 0 otherwise
 */
int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	return (1);
	else
	return (0);
}
