#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * return: 0
 */

int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar(c);
		c++;
		i++,
	}
	c = 'A';
	i = 0;
	while (i < 26)
	{
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
