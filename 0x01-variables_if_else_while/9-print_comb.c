#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of single digit numbers
 * numbers are printed in ascending order
 * Return: Always 0
 */
int main(void)
{
	int v;

	for (v = '0'; v <= '9'; v++)
	{
		putchar(v);
		if (v != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	puchar('\n');

	return (0);
}
