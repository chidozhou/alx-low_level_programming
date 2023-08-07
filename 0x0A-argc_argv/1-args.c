#include <stdio.h>
#include "main.h"

/**
 * main - prints the no of arguments passed to the program
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

