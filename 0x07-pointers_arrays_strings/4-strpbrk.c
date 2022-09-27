#include "main.h"
/**
 * _strpbrk - searches
 * @s: string
 * @accept: string
 *
 * Return:0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; i++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (s + i);
	}
	return (0);
}
