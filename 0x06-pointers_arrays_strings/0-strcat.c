#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: is pointer
 * @src: is pointer
 *
 * Return:0
 */
char *_strcat(char *dest, char *src)
{
	int d = 0, l = 0;

	while (dest[d++])
		l++;
	for (d = 0; src[d]; d++)
		dest[l++] = src[d];

	return (dest);
}
