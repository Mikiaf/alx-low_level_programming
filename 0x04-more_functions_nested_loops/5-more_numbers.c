#include "main.h"
/**
 * more_numbers - print number
 * i: is int
 * j: also in
 *
 * Return: non
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}

		_putchar(10);
	}
}
