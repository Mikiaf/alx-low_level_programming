#include "main.h"
/**
 * print_line - print line
 * @n: parameter
 * i: char
 *
 * Return: 0
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
