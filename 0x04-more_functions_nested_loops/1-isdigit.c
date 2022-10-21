#include "main.h"

/**
 * _isdigit - checks if char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int b = 0;

	if (c >= '0' && c <= '9')
		b = 1;

	return (b);
}
