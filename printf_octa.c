#include "main.h"

/**
 * printf_octa - prints a binary number
 * @count: number of arguments
 * @printed_chars: the printed characters
 * Return: printed characters
*/

int printf_octa(unsigned int count, int printed_chars)
{
	int oct[100], i = 0, j;

	while (count != 0)
	{
		int remainder = count % 8;

		oct[i] = 48 + remainder;
		i++;
		count /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		printed_chars++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
