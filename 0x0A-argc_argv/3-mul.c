#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- multiplies two numbers
 * @argc:int
 * @argv:string
 * i:int
 *
 * Return:number
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d", i * j);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
