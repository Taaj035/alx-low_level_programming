#include "main.h"
/**
 * _pow_recursion - function raises x to the power of y
 * @x: integer to be raised
 * @y: integer that x will be raised to
 * Return: On success 1.
 * On error: Return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
