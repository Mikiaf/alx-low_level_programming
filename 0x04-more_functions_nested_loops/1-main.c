#include "main.h"
#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char c;
	char a;

	c = 'a';
	printf("%d\n", _isdigit(c));
	a = '0';
	printf("%d\n", _isdigit(a));

	return (0);
}
