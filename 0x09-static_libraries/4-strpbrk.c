#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -search a string for anyof a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 * Return: NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
