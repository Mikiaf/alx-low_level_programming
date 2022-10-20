#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: separate string
 * @n: number of args
 *
 * Return:0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(string, char*);

		if (s == NULL)
		{
			printf("(nil)");
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%s", s);
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(string);
}
