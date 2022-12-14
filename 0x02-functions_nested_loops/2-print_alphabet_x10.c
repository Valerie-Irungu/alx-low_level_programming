#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet__x10(void)
{
	int ten;
	char low;

	for (ten = 0; ten <= 9; ten++)
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		_putchar('\n');
	}
}
