#include "main.h"
#include <unistd.h>

/**
 * _printc - Function that prints caracter.
 * @c: Function's parameter.
 * Return: Void
 */

int _printc(char c)
{
	return ((write(1, &c, 1) < 0) ? -1 : 1);

}
/**
 * _prints - Function that prints string.
 * @str: Function's parameter.
 * Return: The number of caracter printed.
 */

int _prints(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		_printc(*str);
		str++;
		len++;
	}
	return (len);
}














