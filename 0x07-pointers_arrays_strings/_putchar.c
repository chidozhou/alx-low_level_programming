#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the character "c" to stdout
 * @c: the character for printing
 *
 * Return: 1 on success.
 * On error, returns -1, & err no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
