#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
 * struct func - struct for specifier
 * @t: character to compare
 * @f: function to handle print
*/

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list args, int printed_chars);
int print_percent(va_list);
int printf_binary(unsigned int count, int printed_chars);
int printf_pointer(va_list args, int printed_chars);
int printf_reverse(va_list args, int printed_chars);
int printf_unsigned(unsigned int count, int printed_chars);

#endif
