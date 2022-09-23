#include "main.h"
/**
 *string_toupper- upper to lower
 * @n: pointer
 *
 * Return:0
 */
char *string_toupper(char *n)
{
	int m;

	for (m = 0; m != '\0'; m++)
	{
		if  (n[m] >= 'a' &&  n[m] <= 'z')
		{
			n[m] = n[m] - 32;
		}
	}
	return (n);
}

