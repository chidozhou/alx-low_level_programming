#include "main.h"
/**
 * print_sign - sign of a number is printing
 * @n: the int to check
 * Return: 1 then prints + if n > zero
 * 0 and prints 0 if n = zero
 * -1 and prints - if n < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}

	else

	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
