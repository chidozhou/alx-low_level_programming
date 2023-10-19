#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: the starting address of the memory to be filled
 * @b: this is the desired value
 * @n: the number of bytes that is going to be changed
 *
 * Return: the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
