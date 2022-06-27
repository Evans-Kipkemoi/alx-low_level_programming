#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char.
 * @size: size of the arra.
 * @c: character to initialize array with
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	if (size == 0)
		return (NULL);

	st = malloc(sizeof(c) * size);

	if (st == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		st[i] = c;

	return (st);
}
