#include "function_pointers.h"
#include <stdlib.h>
/**
 *  print_name - print string
 *  @name:string
 *  @f:function pointer
 *
 *  Return:NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
