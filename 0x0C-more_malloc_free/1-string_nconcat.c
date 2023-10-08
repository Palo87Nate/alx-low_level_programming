#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The string #1 to concatenate.
 * @s2: The string #2 to concatenate.
 * @n: bytes to add from s2
 * Return: p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int len1 = 0;
    while (s1[len1] != '\0')
        len1++;

    unsigned int len2 = 0;
    while (s2[len2] != '\0' && len2 < n)
        len2++;

    char *p = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    if (p == NULL)
        return (NULL);

    unsigned int i, j;

    for (i = 0; i < len1; i++)
        p[i] = s1[i];

    for (j = 0; j < len2; j++)
        p[i + j] = s2[j];

    p[i + j] = '\0';

    return (p);
}

