#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character in a string
 * @str: value to be evaluated
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		lens++;
	}
	l = len - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
	}
	putchar('\n');
}
