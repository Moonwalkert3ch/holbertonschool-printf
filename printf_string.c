#include "main.h"

/**
 * printf_string - prints a string
 * @args: number of arguments
 * @printed_chars: the printed characters
 * Return: printed characters
*/

int printf_string(va_list args, int printed_chars)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		printed_chars++;
		string++;
	}
	return (printed_chars);
}
