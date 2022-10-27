#include <unistd.h>

/**
 * _putchar - writes the character to output
 * @c: character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
