#include "main.h"
/**
 * main - calls function
 *
 *Return:0
 */
int main(void)
{
	char c;
	int r;

	c = '0';
	r = _isdigit(c);
	_putchar(c + ':');
	_putchar(r);
	return (0);
}
