#include "main.h"
/**
 * _strpbrk - the entry point
 * @s: the input
 * @accept: the input
 * Return: Always 0 for success
 */
char *_strpbrk(char *s, char *accept)
{
		int z;

		while (*s)
		{
			for (z = 0; accept[z]; z++)
			{
			if (*s == accept[z])
			return (s);
			}
		s++;
		}

	return ('\0');
}

