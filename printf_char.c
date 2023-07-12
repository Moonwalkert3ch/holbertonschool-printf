#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: the arguments to use
 * @printed_chars: the printed characters
 * Return: printed characters
 */

int printf_char(va_list args, int printed_chars)
{
	char ch = (char) va_arg(args, int);
	{
	_putchar(ch);
	}
	return (printed_chars + 1);
}
