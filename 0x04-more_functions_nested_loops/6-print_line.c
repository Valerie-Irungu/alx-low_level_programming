#include "main.h"
#include <stdio.h"

/**
 *print_line - printsa line dependant on integer n
 *@n: the number of '-' characters to use
 *Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
