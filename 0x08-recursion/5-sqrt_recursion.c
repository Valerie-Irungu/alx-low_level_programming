#include "main.h"
/**
 * comprar - returns square root of a number
 * @n: original number
 * @y: compares multiplication
 * Return: square root
 */
int comprar(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	return (comprar(n, y + 1));
}
/**
 * _sqrt_recursion - returns the power of a number
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (comprar(n, 1));
}
