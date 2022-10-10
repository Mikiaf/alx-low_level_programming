#include "main.h"
/**
 * _isdigit - check for a digits
 * @c: is the digits
 *
 * Return: 0
 */
int _isdigit(int c)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
