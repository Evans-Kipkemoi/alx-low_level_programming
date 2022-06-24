#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two number.
 * @argc: argument count
 * @argv: array of pointer to the argument
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert a string to an int */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
