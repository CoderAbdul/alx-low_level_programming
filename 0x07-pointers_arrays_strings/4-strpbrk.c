#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of set of byte
 * @s: parameter 1, the string to be search
 * @accept: parameter 2, set of bytes to be searched for
 *
 * Return: return null value if the set is not found
 */

char *_strpbrk(char *s, char *accept)
{
	int tmp;

	while (*s)
	{
		for (tmp = 0; accept[tmp]; tmp++)
		{
			if (*s == accept[tmp])
				return (s);
		}
		s++;
	}
	return ('\0');
}
