#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers from 0 up to 9
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');
	}
	_putchar('\n');
}