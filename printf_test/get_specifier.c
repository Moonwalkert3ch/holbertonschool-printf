#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limit.h>
#include "main.h"

Specifier get_specifier(const char *format) {
	Specifier specifier = {
		.type = *format,
		.width = 0,
		.precision = 0,
		.flags = '\0',
	};

	if (*format == '%') {
		format++;
	}
	while (*format == '0') {
		specifier.width++;
		format++;
	}

	if (*format == '.') {
		specifier.precision = 1;
		format++;

		while (*format == '0') {
			specifier.precision++;
			format++;
		}
	}

	if (*format == '*') {
		format++;
		specifier.width = va_arg(args, int);
	}

	if (*format == '#') {
		specifier.flags |= '#';
		format++;
	}

	return specifier;
}
