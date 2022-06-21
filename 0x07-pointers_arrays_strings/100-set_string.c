#include "main.h"

/**
* set_string - function that sets the value of a pointer to a char
*
* @s:  pointer to the source address
* @to: target address
* Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
