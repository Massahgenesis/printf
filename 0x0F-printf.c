#include "main.h"
#include <stddef.h>

/**
 * _printf - Function that produces output according to a format.
 * @format: Function's parameter.
 * Return: n the number of caracter printed.
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index = 0;
	int counter = 0;

	if (format == NULL)
		return (0);
	va_start(args, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == 'c')
				counter += _printc((char)va_arg(args, int));
			else if (format[index] == 's')
				counter += _prints((char *)va_arg(args, char *));
			else if (format[index] == '%')
				counter += _printc('%');
			else if (format[index] == 'd' || format[index] == 'i')
				counter += _printi((int)va_arg(args, int));
			else if (format[index] == 'b')
				counter += _printb((int)va_arg(args, int));
			else
			{
				/*if (format[index] == '\0')
					return (counter);
				counter += _printc('%');
				counter += _printc(format[index]);*/
				/*_prints("Unknown: [%p]\n", format[i]);*/
			}
		}
		else
			counter += _printc(format[index]);
		index++;
	}
	va_end(args);
	return (counter);
}
