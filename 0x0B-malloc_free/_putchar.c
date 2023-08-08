#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the char c to stdout
 * @c: the char to print
 *
 * Return: 1 on success.
 * On error: returns -1 & errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

