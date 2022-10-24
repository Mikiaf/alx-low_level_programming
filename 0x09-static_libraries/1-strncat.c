#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: is pointer
 * @src: is pointer
 *
 * Return:0
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
