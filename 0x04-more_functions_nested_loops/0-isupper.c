#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: Returns 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char c;

	c = 'A';

	printf("%c: %d\n", c, _isupper(c));

	c = 'a';

	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
