#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start counting from
 * Return: void returns nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			_putchar("%d, ', n");
		_putchar("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			_putchar("%d, ", n);
		_putchar("%d\n", 98);
	}
}
