#include "main.h"
/**
 * _strcmp - function that compares string values
 * @s1: value to be input
 * @s2: value to be input
 *
 * Return: s1[x] - s2[x]
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
