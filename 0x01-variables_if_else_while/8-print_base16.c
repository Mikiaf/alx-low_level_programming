#include <stdio.h>
/**
*main - print the string in the put function
*
* Description:using the main function
* this progarm print n
* Return: 0
*/
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
