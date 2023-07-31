#include "main.h"
/**
 * _strspn - the entry point
 * @s: the input
 * @accept: the input
 * Return: Always 0 for Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				n++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

