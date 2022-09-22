#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest:is pointer
 * @src: is pointer
 * @n: int
 *
 * Return:0;
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, l = 0;

	while (dest[d++])
		l++;
	for (d = 0; src[d] && d < n; d++)
		dest[l++] = src[d];
	return (dest);
}

