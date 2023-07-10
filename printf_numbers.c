#include "main.h"

/**
 * printf_numbers - prints integer number
 * @args: number of arguments
 * @printed_nums: the printed number
 * Return: printed numbers
 */

int printf_numbers(va_list args, int printed_nums)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		printed_nums += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		printed_nums += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (printed_nums);
}
