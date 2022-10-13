#include <stdio.h>

/**
 * main - print fibonacci
 * i:int
 * j:int
 * sum:sum of int
 *
 * Return:0;
 */
int main(void)
{
	int i;
	int j = 2;

	printf("1, 2,");
	for (i = 1; i <=50; i++)
	{
		j += i;
		printf("%d, ", j);
	}
	printf("\n");
	return (0);
}
