#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer
 * Return: index of the first element
 * Return: 0 otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (v = 0; v < size; v++)
	{
		if ((*cmp) (array[v]))
		{
			return (v);
		}
	}
	return (-1);
}
