#include "main.h"
/**
 * reverse_array - function that reverse array of integers
 * @a: an array
 * @n: Number of elements of thearray
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
