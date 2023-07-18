#include "main.h"

/**
 * print_alphabet - printing lowercase alphabet letters
 */

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}
