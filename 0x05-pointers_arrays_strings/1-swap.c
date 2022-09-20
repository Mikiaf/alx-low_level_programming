#include "main.h"
/**
 * swap_int - swap values
 * @a: is pointer
 * @b: is pointer
 *
 * Return:null
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	
	*a = *b;
	*b = m;
}
