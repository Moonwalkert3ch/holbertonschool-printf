#include "main.h"

/**
 * printf_reverse - prints a binary number
 * @args: number of arguments
 * @printed_chars: the printed characters
 * Return: printed characters
 */

int printf_reverse(va_list args, int printed_chars)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		putchar(str[i]);
		printed_chars++;
	}

	return (printed_chars);
}
