#include "3-calc.h"
#include <stdio.h>
#include <stdblib.h>
/**
 * op_add - sums two numbers
 * @a: number1
 * @b: number2
 * Return: the sum of both numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: number1
 * @b: number2
 * Return: difference of the two numbers
 */
int op_sub(int a, int b)
{

	return ( a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: number1
 * @b: number2
 * Return: multiple of the two numbers
 */
int op_div(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: number1
 * @b: number2
 * Return: division of the two numbers
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n);
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the modulus of two numbers
 * @a: number1
 * @b: number2
 * Return: modulus of two numbers
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
