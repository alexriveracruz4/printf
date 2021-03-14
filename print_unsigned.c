#include "holberton.h"
#include <stdarg.h>

/**
*print_u - function to print a unsigned int number
*@u: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_u(va_list u)
{
	unsigned int count, n2, num2;
	unsigned int n, div, num3;

	n = va_arg(u, unsigned int);
	n2 = n;
	count = 0;
	while (n2 != 0)
	{
		n2 = n2 / 10;
		count++;
	}
	div = 1;
	for (num2 = 1 ; num2 < count ; num2++)
	{
		div = div * 10;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		for (num3 = count + 1 ; num3 > 1 ; num3--)
		{
			_putchar ((n / div) % 10 + '0');
			div = div / 10;
		}
		return (count);
	}
	else
	{
		return (-1);
	}
}
