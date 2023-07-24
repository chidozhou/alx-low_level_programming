#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: the array name
 * @n: Number of elements of array to be printed
 * Return: returns e and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
