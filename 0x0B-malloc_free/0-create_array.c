#include "main.h"
/**
 * create_array - creates an array
 * @size:size of the array 
 * @c: character
 * 
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char ) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0 i <size; i++)
		array[i] = c;
	return (a);
}