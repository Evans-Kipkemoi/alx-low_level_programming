#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase,
 * then a new line, except q and e
 * Return: 0 Aways (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
