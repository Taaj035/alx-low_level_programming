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
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
