#include "holberton.h"
#include <stdarg.h>
/**
*base_change_8 - function to change a int number in other base
*@n: the number
*@contador: the number of digits that will be has the new number
*@base: the new base
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/
int base_change_8(unsigned int n, int contador, unsigned int base)
{
	int a;

	if (n / base == 0)
	{
		_putchar(n % base + '0');
		return (contador + 1);
	}
	else
	{
		a = base_change_8(n / base, contador + 1, base);
		_putchar(n % base + '0');
		return (a);
	}
}


/**
*print_o - function to print a int number in base 8
*@o: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_o(va_list o)
{
	int count, octal;
	unsigned int n;

	n = va_arg(o, unsigned int);
	count = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		octal = base_change_8(n, count, 8);
	}
	return (octal);
}
