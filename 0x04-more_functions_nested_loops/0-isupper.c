#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: Returns 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
}
