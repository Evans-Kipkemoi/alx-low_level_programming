#include <stdio.h>

/**
 * main - entry point
 * Descrition: prints all possible combinations of single-digit numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	if (n < 9)
	{
		putchar(',');
		putchar(' ');
		{
		}
	}
	putchar('\n');
	return (0);
}
