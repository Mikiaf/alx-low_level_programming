#include "main.h"
/**
 * _islower - checks lowercase characters
 * @c: parameater assied to the characters
 *
 * Return:0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

