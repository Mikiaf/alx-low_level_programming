#include "main.h"
/**
 * _memset -  fills memory
 * @s: is pointer
 * @b: char
 * @n: int
 *
 * Return:0
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
