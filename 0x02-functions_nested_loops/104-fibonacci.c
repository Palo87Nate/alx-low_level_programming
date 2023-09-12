#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
    int i = 0;
    unsigned long long int a = 0, b = 1, next = 0;

    while (i < 98)
    {
        next = a + b;
        a = b;
        b = next;
        printf("%llu", next);
        if (i < 97)
            printf(", ");
        i++;
    }
    putchar('\n');
    return (0);
}
