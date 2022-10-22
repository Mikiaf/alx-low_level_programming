#include "main.h"
/**
* print_times_table - print times table
* @n: int
*
* Return: void
*/
void print_times_table(int n)
{
	int i, j, sum;

	if (n < 0 || n > 98)
		_putchar(' ');
	for (i = 0; i <= n; i++)
	{
		for(j = 0; j <= n; j++)
		{
			sum = j * i;
			if(sum == 0 && j == 0)
				{
					_putchar(sum +'0');
				}
			else if(sum > 9)
			{
				if( j == n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(sum / 10 + '0');
					_putchar(sum % 10 + '0');
					_putchar(',');
				}
			}
			else
			{
				if(j == n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(sum + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(sum + '0');
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}	
}
