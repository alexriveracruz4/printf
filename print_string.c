#include "holberton.h"
#include <stdarg.h>

/**
*print_s - function to print a string
*@s: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_s(va_list s)
{
	char *value;
	int i;

	value = va_arg(s, char*);
	for (i = 0 ; value[i] != '\0' ; i++)
	{
		_putchar(value[i]);
	}
	return (i);
}
