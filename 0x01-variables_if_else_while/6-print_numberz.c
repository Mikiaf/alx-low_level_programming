#include <stdio.h>
/**
* main - print the string in the puts function
*
* Description:using the main function
* this program print n
* Return: 0
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

