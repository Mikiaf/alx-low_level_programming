#include "main.h"
/**
 * _strcpy -copy paste
 * @dest: desc
 * @src:source
 *
 * Return:desc
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}

