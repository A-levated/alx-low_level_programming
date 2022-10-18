#include <stdio.h>
/**
 * main - prints the alphabt in lower case followed by a new line, except q & e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar(\n);

	return (0);
}
