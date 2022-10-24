#include "main.h"
/**
 * _memcpy - copies
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return:0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
