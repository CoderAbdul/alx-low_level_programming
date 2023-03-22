#include "main.h"
/**
 * _islower - Check if the character is in lowercase
 * @x: The character to be checked
 *
 * Return: returns 1 and 0 when the condition is meet
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	return (1);
	else
	return (0);
}
