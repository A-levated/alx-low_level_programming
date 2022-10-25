#include "main.h"

/**
 * _strlen - returns strings length
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
