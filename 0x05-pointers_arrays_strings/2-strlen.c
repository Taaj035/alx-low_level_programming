#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: this is the input string
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int longi;

	for (longi = 0; s[longi] != '\0' ; longi++)
		;
	return (longi);
}
