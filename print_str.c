#include "main.h"

/**
 * print_str - prints a string
 * @args: number of arguments
 * @printed_chars: the printed string
 * Return: printed string
 */

int print_str(va_list args, int printed_chars)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		putchar(*str);
		printed_chars++;
		str++;
	}
	return (printed_chars);
}

