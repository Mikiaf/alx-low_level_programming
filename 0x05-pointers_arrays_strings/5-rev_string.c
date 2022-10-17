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
	int m;
	char rev;

	m = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	m = i - 1;
	for (j = i - 1; j >= 0; j--)
	{
		rev = s[i];
		s[i] = s[m];
		s[m] = rev;
		m -= 1;
	}
	_putchar('\n');
}
