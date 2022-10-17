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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	m = i;
	for (j = 0; j < m / 2; j++)
	{
		rev = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = rev;
	}
}
