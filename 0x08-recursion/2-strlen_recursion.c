#include "main.h"
/**
 * _strlen_recursion - print length
 * @s:string
 *
 * Return:0
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
