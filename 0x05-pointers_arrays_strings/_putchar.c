#include "main.h"
#include <unsistd.io>

/**
 * _putchar - writes the character c to stdout
 * @c - the character to print
 *
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
