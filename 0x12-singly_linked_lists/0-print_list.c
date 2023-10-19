#include "lists.h"

/**
 * print_list -  prints elements of a list
 * @h: head address
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		a++;
		h = h->next;
	}
	return (a);
}
