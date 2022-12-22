#include "main.h"

/**
 * reverse_array - a function that reverses content of an array
 * @a: content
 * @n: number of elements of array
 * Return: Always 0 on success
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
