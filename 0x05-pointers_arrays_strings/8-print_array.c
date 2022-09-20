#include "main.h"
#include <stdio.h>
/**
 * print_array - print numbers
 * @a:pointer
 * @n:int
 *
 * Return:null
 */
void print_array(int *a, int n)
{
	int inc;


	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	_putchar(10);
}
