#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}
