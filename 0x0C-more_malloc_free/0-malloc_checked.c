#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - create malloc
 * @b - int
 *
 * Return:0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
