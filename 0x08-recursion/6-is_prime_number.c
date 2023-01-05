#include "main.h"
/**
 * comprar - function that returns the power of a number
 * @n: original number
 * @y: compares multiplication
 * Return: square root
 */
int comprar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + comprar(n, y + 1));
	}
	return (count);
}
/**
 * is_prime_number - return 1 if number is prime
 * @n: number to evealuate
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (comprar(n, 1) == 2)
		return (1);
	else
		return (0);
}
