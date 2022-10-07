#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


int main(void)
{
	char *c;
	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	free(c);
	return (0);
}
