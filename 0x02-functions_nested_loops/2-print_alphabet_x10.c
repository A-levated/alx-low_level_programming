#include "main.h"

/**
 * print_alphabet_x10 - prints alphebet x10
 */
void print_alphabet_x10(void)
{
	for (ten = 0;  ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
