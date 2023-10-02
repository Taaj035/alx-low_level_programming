#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory area being copied to
 * @src: memory area being copied from
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
			n--;
	}
	return (dest);
}
