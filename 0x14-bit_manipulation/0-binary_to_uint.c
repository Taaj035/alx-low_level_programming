#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The pointer to strings of 0 and 1 chars.
 * Retur:  the converted number, or 0 if
 * there is one or more chars in the string b
 * that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len, base_two;

	if (!b)
		return (0);


	num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			num += base_two;
		}
	}
	return (num);
}
