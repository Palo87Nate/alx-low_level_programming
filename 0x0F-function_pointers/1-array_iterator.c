#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function as parameter on each element
 * @array: array with the integer
 * @size: size of the array 
 * @action: pointer to function for action to take
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
