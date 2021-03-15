#include "holberton.h"
#include <stdarg.h>
/**
*print_R - function to print a int number in base 16 min
*@o: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_R(va_list R)
{
	char *string;

	string = va_arg(R, char *);
	int length;
	int i1;
	int i2;
	char primera[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char segunda[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	length = 52;
	i1 = 0;
	while (string[i1])
	{
		for (i2 = 0 ; i2 < length ; i2++)
		{
			if (string[i1] == primera[i2])
			{
				_putchar(segunda[i2]);
				break;
			}
		}
		if (i2 == length)
			_putchar(string[i1]);
		i1++;
	}
	return (i1 - 1);
}
