#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: is pointer
 * len: is int
 *
 *Return: null
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
