#include "main.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *buffer;
	buffer = create_array(98, 'H');
	simple_print_buffer(buffer, 98);;
}
