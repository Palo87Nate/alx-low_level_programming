#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * return: 0
 */

int main(void)
{
	int i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
