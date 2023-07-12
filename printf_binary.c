#include "main.h"

/**
 * printf_binary - prints a binary number
 * @count: arguments count
 * @printed_chars: printed characters
 * Return: printed characters
*/

int printf_binary(unsigned int count, int printed_chars)
{
	int binary[32] = {0};
	int i = 0;

	if (count == 0)
	{
		_putchar('0');
		printed_chars++;
		return (printed_chars);
	}

	while (count > 0)
	{
		binary[i] = count % 2;
		count /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		printed_chars++;
	}

	return (printed_chars);
}

