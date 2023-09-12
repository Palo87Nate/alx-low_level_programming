#include <stdio.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2;
	int count = 2;
	
	printf("%d, %d, ", fib1, fib2);
	while (count < 98) 
	{
		int next_fib = fib1 + fib2;
	
		printf("%d", next_fib);
		count++;
		if (count < 98) 
		{
			printf(", ");
		}
		else 
		{
            
			printf("\n");
		}
		fib1 = fib2;
		fib2 = next_fib;
	}
	return 0;
}
