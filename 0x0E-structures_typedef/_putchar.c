#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to pri
 * Return: 1: success or -1: error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
