#include "main.h"

/**
 * _strspn - A funcion that gets the length of prefix substring
 * @s: parameter 1,  segment to return bytes from
 * @accept: parameter 2, the bytes to be included
 *
 * Return: return the value of c
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
