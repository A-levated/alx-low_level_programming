#include <stdio.h>
/**
 * A programm to check whether a number is positive or zero
 * main - prints if the number is positive, negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("Enter integer n: \n");
	scanf("%d", &n);
	printf("%d\n", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
