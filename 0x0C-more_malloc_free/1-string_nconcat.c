#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes to add from s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, x, y;
	char *pointer;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	if (n > a)
		n = b;
	pointer = malloc(sizeof(char) * (a + n + 1));
	if (pointer == 0)
		return (NULL);
	for (x = 0; x < a; x++)
		pointer[x] = s1[x];
	b = 0;
	for (y = x; y < (a + n); y++)
	{
		pointer[y] = s2[b];
		b++;
	}
	p[y] = '\0';
	return (pointer);
}
