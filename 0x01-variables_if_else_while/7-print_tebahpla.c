#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabets in lowercase in the reverse order
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);

	putchar('\n');

	return (0);
}
