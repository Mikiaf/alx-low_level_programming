#include <stdio.h>
/**
*main - print the string in the function
*
* Description:using main function
* this program print n
* Return: 0
*/
int main(void)
{
	int v;

	for (v = 48; v <= 57; v++)
	{
		putchar(v);
		if (v != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
