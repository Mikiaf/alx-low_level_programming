#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int *a;
	a = array_range(0, 10);
	free(a);
	return (0);
}
