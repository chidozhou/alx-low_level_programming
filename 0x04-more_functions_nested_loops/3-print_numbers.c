#include "main.h"

/**
 * print_numbers - Print 0-9 , followed by a new line.
 * return: void
 */

void print_numbers(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
