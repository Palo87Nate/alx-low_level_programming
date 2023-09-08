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

	for (c = 0; c <= 7; c++)
	{
		for (d = c + 1; d <= 8; d++)
		{
			for (e = d + 1; e <= 9; e++)
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
