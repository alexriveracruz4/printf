#include "holberton.h"
#include <stdarg.h>
/**
*base_change_16_min - function to change a int number to 16 base min
*@n: the number
*@contador: the number of digits that will be has the new number
*@base: the new base
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/
int base_change_16_min(unsigned int n, int contador, unsigned int base)
{
	int a, i;
	char *letras_min = "abcdef";
	unsigned int numeros[6] = {10, 11, 12, 13, 14, 15};

	if (n / base == 0)
	{
		for (i = 0; i < 6 ; i++)
		{
			if (numeros[i] == (n % base))
			{
				_putchar(letras_min[i]);
				break;
			}
		}
		if (i == 6)
			_putchar(n % base + '0');
		return (contador + 1);
	}
	else
	{
		a = base_change_16_min(n / base, contador + 1, base);
		for (i = 0; i < 6 ; i++)
		{
			if (numeros[i] == (n % base))
			{
				_putchar(letras_min[i]);
				break;
			}
		}
		if (i == 6)
			_putchar(n % base + '0');
		return (a);
	}
}
/**
*base_change_16_may - function to change a int number to 16 base
*@n: the number
*@contador: the number of digits that will be has the new number
*@base: the new base
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/
int base_change_16_may(unsigned int n, int contador, unsigned int base)
{
	int a;
	char *letras_may = "ABCDEF";
	unsigned int numeros[6] = {10, 11, 12, 13, 14, 15};
	int i;

	if (n / base == 0)
	{
		for (i = 0; i < 6 ; i++)
		{
			if (numeros[i] == (n % base))
			{
				_putchar(letras_may[i]);
				break;
			}
		}
		if (i == 6)
			_putchar(n % base + '0');
		return (contador + 1);
	}
	else
	{
		a = base_change_16_may(n / base, contador + 1, base);
		for (i = 0; i < 6 ; i++)
		{
			if (numeros[i] == (n % base))
			{
				_putchar(letras_may[i]);
				break;
			}
		}
		if (i == 6)
			_putchar(n % base + '0');
		return (a);
	}
}

/**
*print_x - function to print a int number in base 16 min
*@x: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_x(va_list x)
{
	int count, hex;
	unsigned int n;

	n = va_arg(x, unsigned int);
	count = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		hex = base_change_16_min(n, count, 16);
	}
	return (hex);
}

/**
*print_X - function to print a int number in base 16 mayus
*@X: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/
int print_X(va_list X)
{
	int count, hex;
	unsigned int n;

	n = va_arg(X, unsigned int);
	count = 0;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		hex = base_change_16_may(n, count, 16);
	}
	return (hex);
}
