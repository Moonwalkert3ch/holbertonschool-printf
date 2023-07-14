#include "main.h"

/**
 * _printf - prints a string by format
 * @format: string to print
 * @...: variadic parameters
 * Return: number of printed characters
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int printed_chars = 0;
	va_list args;
	va_start(args, format);
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			printed_chars = putchar(format[i]);
			count = count + printed_chars;
			i++;
			continue;
		}
	}
	
	if (format[i] == '%')
	{
		f = check_specifier(&format[i + 1]);
		if (f != NULL)
		{
			printed_chars = f(args);
			count = count + printed_chars;
			i = i + 2;
			continue;
		}

		if (format[i + 1] == '\0')
		{
			break;
		}

		if (format[i + 1] != '\0')
		{
			printed_chars = putchar(format[i + 1]);

			count = count + printed_chars;
			i = i + 2;
			continue;
		}
	}

	return (count);
}
