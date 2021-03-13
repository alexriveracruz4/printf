#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - function print all
 * @format: type of the argument
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0, n = 0;

	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		for (;format[i] && format[i] != '%'; i++)
		{
			_putchar(format[i]);
			n++;
		}
		for (j = 0; format[i] == '%' && p[j].type != NULL; j++)
		{
			if (format[i + 1] == *(p[j].t))
			{
				n += p[j].func(list);
				i += 2;
				break;
			}
		}
		if(format[i] == '%' && p[j].type == NULL)
		{
			_putchar(format[i]);
			n++;
			if (format[i+1] == '%')
				i += 2;
			else
				i++;
		}
	}
	va_end(valist);
	return (n);
}
