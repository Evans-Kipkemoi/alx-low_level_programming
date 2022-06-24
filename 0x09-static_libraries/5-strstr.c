#include "main.h"

/**
 * _strstr - function locates a substring
 *
 * @haystack: locate a substring
 * @needle: substring to search for
 * Return: 0 NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
