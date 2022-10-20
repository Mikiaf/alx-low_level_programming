#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string
 * @n: numbers of arg
 * @...:variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(num, int);

		if (separator == NULL)
		{
			printf("%d ", x);
		}
		else if (i == n - 1)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d%s ", x, separator);
		}
	}
	printf("\n");

	va_end(num);
}
