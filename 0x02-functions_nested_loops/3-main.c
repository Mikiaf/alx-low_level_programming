#include "main.h"
/**
 * main - calls a function
 *
 * Return:0
 */
int main(void)
{
	int r;
	int m;

	for (r = 'a'; r <= 'z'; r++)
	{
		m = _islower(r);
	}
	for (r = 97; r <= 122; r++)
	{
		m = _islower(r);
	}
	_putchar(m);
	_putchar('\n');
	return (0);
}

