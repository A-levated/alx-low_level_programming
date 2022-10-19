#include <stdio.h>
/**
 * main - prints single digits combinations
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
		putchar(a + '0');

		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');

		return (0);
}
