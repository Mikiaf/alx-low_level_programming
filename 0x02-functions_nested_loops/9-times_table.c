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
				if ((sum == 0 && j == 9) || (sum == 9 && j == 9))
				{
					_putchar(sum + '0');
				}
				else
				{
					_putchar(sum + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if (i * 9 == sum)
				{
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
				}
				else
				{
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
