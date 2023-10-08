#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array by using min and max values
 * @min: the small array value
 * @max: the big array value
 * Return: Pointer value
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
