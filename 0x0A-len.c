#include "main.h"

/**
 * _len - Function that prints the length of string.
 * @str: Function's parameter.
 * Return: The string's lenght.
 */

int _len(char *str)
{
	if (!str)
	{
		return (-1);
	}
	return ((*str == '\0') ? 0 : 1 + _len(str));
}
