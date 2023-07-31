#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the entry point
 * @a: the input
 * @size: the input
 * Return: Always 0 for success
 */
void print_diagsums(int *a, int size)
{
	int sm1, sm2, x;

	sm1 = 0;
	sm2 = 0;

	for (x = 0; x < size; x++)
	{
		sm1 = sm1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sm2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sm1, sm2);
}

