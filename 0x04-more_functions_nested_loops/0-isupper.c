#include "main.h"

/**
 * _isupper - a function that checks upper case
 * @c: input
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
