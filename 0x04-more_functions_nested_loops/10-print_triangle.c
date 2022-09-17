#include "main.h"
/**
 * print_triangle - print triangle
 * @size: parap
 * n: int
 * r: int
 * t: int
 * Return:0
 */
void print_triangle(int size)
{
	int n, r, t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (n = 0; n < (size - 1) - r; n++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= r; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
