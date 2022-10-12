#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints ogcodes
 * @argc:int
 * @argv:arrary
 * bytes:int
 * i:int
 * arr:string
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int bytes, i;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if(i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
