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
	char i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
