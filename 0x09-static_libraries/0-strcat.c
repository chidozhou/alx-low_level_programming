#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: input
 * @src: input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int j;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[x] = src[x];
		x++;
		j++;
	}

	dest[x] = '\0';
	return (dest);
}

