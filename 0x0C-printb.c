#include "main.h"

/**
 * _printb - Function that converts an int to binary.
 * @number: Function's parameter.
 * Return: The number of caracter printed.
 */

int _printb(int number)
{
	int n;

	if (number < 0)
	{
		return (0);
	}
	if (number < 2)
	{
		_printc('0' + number);
		return (1);
	}
	n = _printb(number / 2);

	_printc('0' + (number % 2));
	return (n + 1);
}
