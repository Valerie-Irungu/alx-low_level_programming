#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints single digit numbers of base 10 starting with 0
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		printf("%d", m);
	printf("\n");

	return (0);
}
