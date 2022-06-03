#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 Always(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
