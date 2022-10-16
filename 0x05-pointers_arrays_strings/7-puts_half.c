#include "main.h"

/**
 * puts_half - printf half of string
 * @str: is string
 *
 * Return:void
 */
void puts_half(char *str)
{
	int size, i, j;

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size % 2 != 0)
	{
		i = (size - 1) / 2;
		for (j = i; j <= size; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		i = size / 2;
		for (j = i; j <= size; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
