#include "main.h"
/**
 * _islower - checks lowercase characters
 * @c: parameater assied to the characters
 *
 * Return:0
 */
int _islower(int c)
{
	int i;

	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

