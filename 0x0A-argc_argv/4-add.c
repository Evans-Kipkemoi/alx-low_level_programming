#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 - success and Error on 1
 */
int main(int argc, char *argv[])
{
	int b, c, sum = 0;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (!isdigit(argv[b][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[b]);
	}
	printf("%d\n", sum);
	return (0);
}
