#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
Specifier get_specifier(const char *format);

#endif
