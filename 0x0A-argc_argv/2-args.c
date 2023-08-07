#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: no of arguments
 * @argv: an array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}

