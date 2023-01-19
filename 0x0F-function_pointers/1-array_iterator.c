#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @size: size of the array
 * @action: pointer
 * @array: array to pass
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array && action != NULL)
	{
		for (v = 0; v < size; v++)
		{
			(action) (array[v]);
		}
	}
}
