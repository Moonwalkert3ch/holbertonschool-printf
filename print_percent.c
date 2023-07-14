#include "main.h"

/**
 * print_percent - prints a character to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
*/

int print_percent(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c == "%")
	{
		count = putchar(c + 1);
		return (count);
	}
	return (0);
}
