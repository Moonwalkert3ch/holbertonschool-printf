#include "main.h"

#define MAX_HEXA_DIGITS 16

/**
 * printf_pointer - prints a binary number
 * @args: number of arguments
 * @printed_chars: the printed characters
 * Return: printed characters
*/
 int printf_pointer(va_list args, int printed_chars)
{
	void *ptr = va_arg(args, void*);
	unsigned long count = (unsigned long) ptr;
   	int digits = 0;
   	int num;
   	unsigned long temp = count;
   	char hexa_digits[MAX_HEXA_DIGITS] = "0123456789abcdef";
   	char hex[MAX_HEXA_DIGITS];

   	while (temp != 0)
   	{	
   	digits++;
   	temp /= 16;
   	}

   	printed_chars += putchar('0');
  	printed_chars += putchar('x');

   	if (count == 0)
   	{
   	printed_chars += putchar('0');
   	}
   	else
   	{
   	for (num = digits - 1; num >= 0; num--)
   	{
   	int digit = count % 16;

   	hex[num] = hexa_digits[digit];
   	count /= 16;
   	}
   	for (num = 0; num < digits; num++)
   	{
   	printed_chars += putchar(hex[num]);
   	}
   	}
   	return (printed_chars);
}
