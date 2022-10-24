#include "main.h"
/**
 * _strlen - print the length of string
 * @s: is pointer
 *
 * Return:null
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
