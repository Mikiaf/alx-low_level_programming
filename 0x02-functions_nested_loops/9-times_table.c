#include "main.h"
/**
 * times_table - print time table
 * i: int
 * j: int
 *
 * Return:0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int sum;

			sum = (j * i);
			if (sum < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
