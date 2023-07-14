#include "main.h"

/**
 * print_integer - prints integer number
 * @args: number of arguments
 * @printed_nums: the printed number
 * Return: printed numbers
 */

int print_integer(va_list args, int printed_nums)
{
	int num = va_arg(args, int);
	int divisor = 1;
	int temp = num;
	int digit;

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (temp = num)
	{
		 while (temp > 9) {
			 temp /= 10;
			 divisor *= 10;
		 }
		   while (divisor != 0) {
			   int digit = num / divisor;
			   putchar('0' + digit);
			   num %= divisor;
			   divisor /= 10;
		   }
	}
	return (printed_nums);
}
