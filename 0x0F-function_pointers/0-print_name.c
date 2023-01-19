#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string with the name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(f) (name);
	}
}
