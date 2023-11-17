#include "main.h"
#include <limits.h>

/**
 * _printp - Function that positif integer.
 * @number: Function's parameter.
 * Return: void
 */

int _printp(int number)
{
	int n = 0;

	if (number <= 9)
	{
		return (_printc('0' + number));
	}
	else
	{
		n += _printp(number / 10);
		return (_printc('0' + (number % 10)) + n);
	}
}
/**
 * _printi - Function that print integer.
 * @number: Function's parameter.
 * Return: Numbe of digit print.
 */

int _printi(int number)
{
	if (number < 0)
	{
		int n = _printc('-');
	if (n == INT_MIN)
	{
		n += _printp(-(number / 10));
		return (n + _printc('0' + (-(number % 10))));
	}
	else
	{
		return (n + _printp(-number));
	}
	}
	else
	{
	return (_printp(number));
	}
}

