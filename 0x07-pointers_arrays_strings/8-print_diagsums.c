#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: arrays
 * @size: size * size of the square matrix
 * Return: 0 on Success
 */
void print_diagsums(int *a, int size)
{
	int i;
	int total1 = 0;
	int total2 = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		total1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		total2 += a[i];
	}

	printf("%d, %d\n", total1, total2);
}
