#include "main.h"
/**
 *print_alphabet_x10 - pirnt the alphabet x10
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
