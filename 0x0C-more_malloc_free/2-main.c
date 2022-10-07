#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *a;
	a = _calloc(98, sizeof(char));
	free(a);
	return (0);
}
