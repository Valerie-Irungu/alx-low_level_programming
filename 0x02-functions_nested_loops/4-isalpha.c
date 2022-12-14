#include "main.h"

/**
 * _isalpha: checks for the alphabetic characters
 * @c: character to be checked
 * Return 1 if c is a letter ,uppercase or lowercase, and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
