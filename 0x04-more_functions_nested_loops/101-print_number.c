#include "main.h"

/**
 * print_number - an integer will be printed
 * @n: the integer wc is to be printed
 */
void print_number(int n)
{
unsigned int num1

if (n < 0)
{
num1 = -n;
_putchar('-');
}
else
{
num1 = n;
}

if (num1 / 10)
{
print_number(num1 / 10);
}

_putchar((num1 % 10) + '0');
}

