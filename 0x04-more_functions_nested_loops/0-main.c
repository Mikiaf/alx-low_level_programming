#include "main.h"
/**
 * main - calls function
 *
 * Return:0
 */
int main(void)
{
	char c;
	char r;

	c = 'A';
	r = _isupper(c);
	_putchar(c + ':');
	_putchar(r);
	return (0);
}
