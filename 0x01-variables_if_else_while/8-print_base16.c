#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 0;
	while (i < 6)
	{
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
