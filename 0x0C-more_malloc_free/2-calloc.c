#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc: this function allocates memory
 * @nmemb: determines the number of array elements
 * @size: the size of each element in the array
 * Return: Pointer to first index in the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		point[i] = 0;
	}
	return (point);
}
