#include "main.h"
/**
 * rev_string - reverses strings
 * @s: string
 *
 * Return:null
 */
void rev_string(char *s)
{
	int i;
	int j;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
