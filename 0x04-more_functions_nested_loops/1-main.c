#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char c;

	c = 'a';
	_putchar(c);
	_putchar(':');
	_putchar(_isdigit(c));
	_putchar('\n');
	return (0);
}
