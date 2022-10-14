#include "variadic_functions.h" 
#include <stdarg.h>
#include <stdio.h>
/**
 * print_number - print numbers
 * @separator: string
 * @n: numbers of arg
 * @...:variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums. int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
