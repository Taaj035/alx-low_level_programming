#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @i: The number.
 * @j: The number to flip i to.
 *
 * Return: The necessary number of bits to flip to get from i to j.
 */
unsigned int flip_bits(unsigned long int i, unsigned long int j)
{
	unsigned long int xor = i ^ j, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
