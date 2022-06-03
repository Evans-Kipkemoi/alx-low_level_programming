#include <stdio.h>

/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
