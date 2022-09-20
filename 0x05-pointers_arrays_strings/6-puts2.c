#include "main.h"
/**
 * puts2 - print character
 * @str: pointer
 *
 * Return: null
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar(10);
	_putchar(10);
}
