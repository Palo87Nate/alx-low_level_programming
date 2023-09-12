#include <stdio.h>
#include <gmp.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
    int i;
    mpz_t a, b, next;

    mpz_init(a);
    mpz_init_set_ui(b, 1);
    mpz_init(next);
    for (i = 0; i < 98; i++) 
    {
        mpz_add(next, a, b);
        mpz_set(a, b);
        mpz_set(b, next);

        mpz_out_str(stdout, 10, next);
        if (i < 97)
            printf(", ");
    }
    printf("\n");
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(next);
    return 0;
}
