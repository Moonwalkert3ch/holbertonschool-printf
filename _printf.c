#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf – prints output by format
 * @format: a characters string
 * Return: printed characters
*/

int _printf(const char *format, ...)
{
	char ch, *str;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
	if (*format == '%')
	{
	format++;
	if(*format == '%')
	{
	putchar('%');
	count++;
	}
	if(*format == 'c')
		ch = (char)va_arg(args, int);
	putchar (ch);
	count++;
	if(*format == 's')
	{
	str = va_arg(args, char *);
		while (*str != '\0')
		{
		putchar(*str);
		count++;
		str++;
		}
	}
	if (*format == 'd')
	{
	if (*format == 'i')

	format++;
	}
	else
	{
	putchar(*format);
	count++;
	}
	format++;
	}
	va_end(args);
	}
	return(count);

}
