#include "main.h"
/**
 * _islower - check if character is in lowercase
 * @c: the char to be checked
 * Return: 1 for char lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
}
