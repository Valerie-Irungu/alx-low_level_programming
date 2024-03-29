#include "variadic_functions.h"
/**
 * summ_them_all - calculates sum of the parameters
 * @n: number of argurments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
