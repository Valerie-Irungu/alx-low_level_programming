#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square dependent on integer n
 * @n: number of lines using '#' characters to use per row and column
 * size - is the size of the square
 * Return: 0
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
