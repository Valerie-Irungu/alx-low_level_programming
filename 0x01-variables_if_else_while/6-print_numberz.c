#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print single digit numbers of base 10 starting with 0
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
		putchar(l);
	putchar('\n');

	return (0);
}
