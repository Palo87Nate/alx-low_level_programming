#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * return: 0
 */

int main(void)
{
	char c = '0';
	int i = 0;
	while (i < 10)
	{
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
