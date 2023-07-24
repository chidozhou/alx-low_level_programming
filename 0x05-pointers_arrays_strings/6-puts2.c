#include "main.h"
/**
 * puts2 - the function prints every other character of a string
 * @str: string to be inputted
 * Return: prints the character
 */
void puts2(char *str)
{
	int longi = 0;
	int s = 0;
	char *y = str;
	int t;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	s = longi - 1;
	for (t = 0 ; t <= s ; t++)
	{
		if (t % 2 == 0)
	{
		_putchar(str[t]);
	}
	}
	_putchar('\n');
}


