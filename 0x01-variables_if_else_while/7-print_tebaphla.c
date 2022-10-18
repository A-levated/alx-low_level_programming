#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char bm;

	for (bm = 'z'; bm >= 'a'; bm--)
		putchar(bm);

	putchar('\n');

	return (0);
}
