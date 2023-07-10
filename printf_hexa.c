#include "main.h"

/**
 * printf_hexa - prints a binary number
 * @count: number arguments
 * @printed_chars: printed characters
 * @upper_chars: the uppercase characters
 * Return: printed characters
*/

int printf_hexa(unsigned int count, int printed_chars, int upper_chars)
{
	int hexa[100], i = 0, j;

	while (count != 0)
	{
		int remainder = count % 16;

		if (remainder < 10)
		{
			hexa[i] = 48 + remainder;
		}
		else
		{
			if (upper_chars)
			{
				hexa[i] = 65 + (remainder - 10);
			}
			else
			{
				hexa[i] = 97 + (remainder - 10);
			}
		}
		i++;
		count /= 16;
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
			_putchar(hexa[j]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
