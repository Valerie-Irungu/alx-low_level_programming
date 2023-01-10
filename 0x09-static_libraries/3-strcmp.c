#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0 on success
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[1] != '\0' && s2[1] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
