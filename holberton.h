#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type of element
 * @f: function to print
 */
typedef struct print
{
	char *type;
	int (*func)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);

#endif
