#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int printf_char(va_list args, int printed_chars);
int printf_string(va_list args, int printed_chars);
int printf_numbers(va_list args, int printed_nums);
int selector(const char *format, va_list args, int printed_chars);
int printf_bin(unsigned int count, int printed_chars);
int _printf(const char *format, ...);
int printf_octa(unsigned int count, int printed_chars);
int printf_unsigned(unsigned int count, int printed_chars);
int printf_reverse(va_list args, int printed_chars);
int printf_pointer(va_list args, int printed_chars);
int printf_hexa(unsigned int count, int printed_chars, int upper_chars);

#endif
