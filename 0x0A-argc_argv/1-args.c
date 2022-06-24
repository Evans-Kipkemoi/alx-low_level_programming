#include <stdio.h>
/**
 * main - prints the number of arguenments passed to it
 * @argc: number of command line arguemnets
 * @argv: array of pointer to arguements
 * Return: 0 Success
 **/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
