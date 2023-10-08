#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the space to malloc
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == 0)
	{
		exit(98);
	}
	return (pointer);
}
