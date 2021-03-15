#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
*print_R - function to print a int number in base 16 min
*@R: paramaters
*Return: the number of characters printed
*On error, -1 is returned, and errno is set appropriately.
*/

int print_R(va_list R)
{
	char *string = va_arg(R, char *);
	int len = 52;
	int i1 = 0;
	int i2;
	char pri[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char seg[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	if (string == NULL)
		string = "(ahyy)";
	while (string[i1])
	{
		for (i2 = 0 ; i2 < len ; i2++)
		{
			if (string[i1] == pri[i2])
			{
				_putchar(seg[i2]);
				break;
			}
		}
		if (i2 == len)
			_putchar(string[i1]);
		i1++;
	}
	return (i1 - 1);
}
