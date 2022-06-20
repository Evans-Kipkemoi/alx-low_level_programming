#include "main.h"

/**
 * _strchr - points to a character in a string
 * @s: the string to check
 * @c: the chatacter
 * Return: *S Null if char not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
