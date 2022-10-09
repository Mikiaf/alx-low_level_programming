#include "main.h"
/**
 *  print_to_98 - print upto 98
 *  @n: from this number
 *
 *  Return:0
 */
void print_to_98(int n)
{
	int i, j;

	j = 98;
	if (j >= n)
	{
		for (i = n; i <= j; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				 _putchar(',');
				 _putchar(' ');
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
	}
	else
	{
		for (i = n; i >= j; i--)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i > 10 && i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				int sum;
				sum = i / 10;

				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
