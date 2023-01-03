#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: locates a substring
 * @needle: substring to be located
 * Return: 0 on Success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
