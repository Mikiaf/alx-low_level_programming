#include "main.h"
#include <stdio.h>
/**
 * main- print the number arguments passed in
 * @argc: is int
 * @argv: is string
 *i:int
 * Return:0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
