#include "main.h"
/**
 * _puts - prints string
 * @str: is pointer
 * len: is int
 *
 * Return:null
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
