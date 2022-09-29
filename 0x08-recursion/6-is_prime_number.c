#include "main.h"
/**
 * is_prime_number - return prime number
 * @n: is int
 *
 * Return:0
 */
int is_prime_number(int n)
{
	int s = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, s));
}
/**
 * is_prime - function
 * @n: int
 * @s:int
 *
 * Return:0
 */
int is_prime(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);
	return (is_prime(n, s - 1));
}
