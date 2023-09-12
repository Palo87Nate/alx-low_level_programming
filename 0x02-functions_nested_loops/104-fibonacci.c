#include <stdio.h>
#include <gmp.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: 0
 */
int main() {
    long long a = 1, b = 2, c;
    int count = 2;

    printf("%d, %d, ", a, b);
    while (count < 98)
    {
        c = a + b;
        a = b;
        b = c;

        count++;
        if (count == 98)
	{
            printf("%lld\n", c);
        }
	else
	{
            printf("%lld, ", c);
        }
    }
    return (0);
}
