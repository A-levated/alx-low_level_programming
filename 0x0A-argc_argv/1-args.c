#include "main.h"
#include <stdio.h>

/**
 * main- prints number of arguments
 * @argc: argument count
 * @argv: argument array
 * Return: always o
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
