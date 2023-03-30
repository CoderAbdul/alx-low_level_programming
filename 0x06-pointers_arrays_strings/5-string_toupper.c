#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters
 *  of a string to uppercase
 * @s: input string parameter
 *
 * Return: return the value of s
 */

char *string_toupper(char *s)
{
	int tmp = 0;

	while (*(s + tmp) != '\0')
	{
		if ((*(s + tmp) >= 97) && (*(s + tmp) <= 122))
			*(s + tmp) = *(s + tmp) - 32;
		tmp++;
	}
	return (s);
}
