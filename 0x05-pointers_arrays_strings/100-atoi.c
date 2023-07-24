#include "main.h"

/**
 * _atoi - will converts  string to integer
 * @s: string that is to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int x, y, z, len, f, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (z);
}

