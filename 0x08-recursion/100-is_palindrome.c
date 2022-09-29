#include "main.h"

/**
 * is_palindrome - function
 * @s: string
 *
 *Return:0
 */
int is_palindrome(char *s)
{
	int f = 1;

	check(s, 0, _strlen_recursion(s) - 1, &f);
	return (f);
}
/**
 * check- function
 * @s: string
 * @st:int
 * @e:int
 * @f:pointer
 *
 * Return: 0
 */
void check(char *s, int st, int e, int *f)
{
	if (st <= e)
	{
		if (s[st] == s[e])
			*f *= 1;
		else
		{
			*f *= 0;
		}
		check(s, st + 1, e - 1, f);
	}
}
/**
 * _strlen_recursion - calculates
 * @s: string
 *
 * Return:0
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum = _strlen_recursion(s + 1);
	}
	return (sum);
}
