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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

