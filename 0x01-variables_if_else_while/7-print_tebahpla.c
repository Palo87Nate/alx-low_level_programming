#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase reversed
 *
 * return: 0
 */

int main(void)
{
	char c = 'z';
	int i = 26;
	while (i > 0)
	{
		putchar(c);
		c--;
		i--;
	}
	putchar('\n');
	return (0);
}
