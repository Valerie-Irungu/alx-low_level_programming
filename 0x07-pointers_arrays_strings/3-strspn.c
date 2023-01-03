#include "main.h"

/**
 * _strspn - Returns the number of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 on success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, nn value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}
