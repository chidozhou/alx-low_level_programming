#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}


