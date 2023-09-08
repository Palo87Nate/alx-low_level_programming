#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet (except e and q) in lowrcase
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
