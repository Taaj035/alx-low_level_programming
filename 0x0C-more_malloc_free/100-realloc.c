#include <stdlib.h>
#include "main.h"

/**
 * _realloc - the function that reallocs a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: Pointer value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int i, lower = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		lower = new_size;
	else
		lower = old_size;
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < lower; i++)
	{

		point[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (point);
}
