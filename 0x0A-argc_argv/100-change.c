#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum num of coins to
 * make change 4 an amount of money
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 for error
 */
int main(int argc, char *argv[])
{
	int no, x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	no = atoi(argv[1]);
	result = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && no >= 0; x++)
	{
		while (no >= coins[x])
		{
			result++;
			no -= coins[x];
		}
	}

	printf("%d\n", result);
	return (0);
}

