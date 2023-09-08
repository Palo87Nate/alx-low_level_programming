#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 10; d++)
		{
			for (c = 0; c < 10; c++)
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(e + '0');
				if (c != 7 || d != 8 || e != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
	putchar('\n');
	return (0);
}
						

