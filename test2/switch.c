#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguments
 * @printed_chars: the printed characters
 * @format: the format specifier
 * Return: printed characters
*/

int selector(const char *format, va_list args, int printed_chars)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			printed_chars = printf_numbers(args, printed_chars);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			printed_chars++;
			break;
		case 's':
			printed_chars = printf_string(args, printed_chars);
			break;
		case '%':
			_putchar('%');
			printed_chars++;
			break;
		case 'b':
			printed_chars = printf_binary(va_arg(args, unsigned int), printed_chars);
			break;
		case 'x':
		case 'X':
			printed_chars = printf_hexa(va_arg(args, unsigned int), printed_chars, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			printed_chars = printf_octa(va_arg(args, unsigned int), printed_chars);
			break;
		case 'u':
			printed_chars = printf_unsigned(va_arg(args, unsigned int), printed_chars);
			break;
		case 'r':
			printed_chars = printf_reverse(args, printed_chars);
			break;
		case 'p':
			printed_chars = printf_pointer(args, printed_chars);
			break;
		default:
			break;
	}
	return (printed_chars);
}
