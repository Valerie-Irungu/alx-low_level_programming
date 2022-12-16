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

	_isupper(0);

	for (; uppercase <= 'z'; uppercase++)
	{
		if (c == uppercase)
		{
			_isupper(1);
			break;
		}
	}
	return (0);
}
