#include "main.h"
/**
 * _sqrt_recursion - return the squre root
 * @n:is int
 *
 * Return:0
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - function
 * @n:int
 * @x:int
 *
 * Return:0
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

