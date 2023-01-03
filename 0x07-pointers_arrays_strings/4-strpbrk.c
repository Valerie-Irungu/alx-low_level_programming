#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string
 * @accept: set of bytes
 * Return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
