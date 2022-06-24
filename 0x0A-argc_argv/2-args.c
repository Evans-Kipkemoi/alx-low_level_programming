#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument counter (number of command line arguments)
 * @argv: argument vector (array pointing to argument strings)
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
		printf("%s\n", argv[b]);

	return (0);
}
