#include "main.h"

/**
 * printf_unsigned - prints a binary number
 * @count: number of arguments
 * @printed_chars: the printed characters
 * Return: printed characters
 */

int printf_unsigned(unsigned int count, int printed_chars)
{
	int digits = 0;
	unsigned int temp = count;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (count == 0)
	{
		_putchar('0');
		printed_chars++;
	}
	else
	{
		char unsigned_str[11];
		int num = 0;

		while (count != 0)
		{
			unsigned_str[num] = (count % 10) + '0';
			count /= 10;
			num++;
		}
		for (num = digits - 1; num >= 0; num--)
		{
			_putchar(unsigned_str[num]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
