#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array.
 * @a: value to be evaluated
 * @n: number of elements of the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
