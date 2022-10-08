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
		for (j = 0; j < 10; i++)
		{
			int sum;

			sum = j * i;
			_putchar(sum);
		}
	}
}
