#include "main.h"
/**
 * leet - function that encode into 1337speak
 * @n: value to be input
 * Return: the value n
 */
char *leet(char *n)
{
	int x, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[x] == s1[x])
			{
				n[x] = s2[x];
			}
		}
	}
	return (n);
}


