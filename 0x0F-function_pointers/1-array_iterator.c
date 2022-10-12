#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action:function pointer
 *
 * Return:null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action[array[i]];
}
