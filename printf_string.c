#include "main.h"

/**
 * printf_string - prints a string
 * @args: number of arguments
 * @printed_chars: the printed string
 * Return: printed string
 */

int printf_string(va_list args, int printed_chars)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed_chars++;
		string++;
	}
	return (printed_chars);
}
