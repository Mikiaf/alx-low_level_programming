#include "main.h"
/**
 *  print_to_98 - print upto 98
 *  @n: from this number
 *
 *  Return:0
 */
void print_to_98(int n)
{
	int i, j, sum;

	j = 98;
	if (j >= n)
	{
		for (i = n; i <= j; i++)
		{
			if (i < -99)
			{
				i *= -1;
				sum = i / 10;
				_putchar('-');
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
				i *= -1;
			}
			else if (i < -9)
			{
				i *= -1;
				_putchar('-');
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
				i *= -1;
			}
			else if (i < 0)
			{
				i *= -1;
				_putchar('-');
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
				i *= -1;
			}
			else if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i == 98)
			{
				_putchar(98 / 10 + '0');
				_putchar(98 % 10 + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
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
			else if (i == 98)
			{
				_putchar(98 / 10 + '0');
				_putchar(98 % 10 + '0');
			}
			else if (i > 10 && i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
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
