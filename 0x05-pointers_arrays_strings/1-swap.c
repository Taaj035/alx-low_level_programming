#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: this is the first parameter
 * @b: this is the second parameter
 */
void swap_int(int *a, int *b)
{
	int swapped;

	swapped = *a;
	*a = *b;
	*b = swapped;
}
