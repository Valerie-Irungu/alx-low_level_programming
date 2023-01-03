#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: old memory area
 * @src: new memory area
 * @n: bytes
 * Return: Always 0 on Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
