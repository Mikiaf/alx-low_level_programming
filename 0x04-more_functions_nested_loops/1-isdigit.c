#include "main.h"
/**
 * _isdigit - checks for a digits
 * @c: for digits
 *
 * Return:0;
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
