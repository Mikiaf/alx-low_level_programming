#ifndef   FUNCTION_POINTER_H
#define   FUNCTION_POINTER_H
#include <stdlib.h>




int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));


#endif
