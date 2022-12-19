#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to the buffer pointed to
 * @dest: value to be evaluated
 * @src: value to be evaluated
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
