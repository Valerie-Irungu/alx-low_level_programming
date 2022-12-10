#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints numbers to the base 16
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int l;
	char lower;

	for (l = '0'; l <= '9'; l++)
		putchar(l);

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
