#include "main.h"

/**
 * _printf – prints output by format
 * @format: a characters string
 * Description: function that prints output
 * Return: printed characters
*/

int _printf(const char *format, ...)
{
	int printed_chars = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printed_chars = selector(format, args, printed_chars);
		}
		else
		{
			_putchar(*format);
			printed_chars++;
			format++;
		}
	}
	va_end(args);
	return (printed_chars);
}
