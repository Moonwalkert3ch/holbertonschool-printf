typedef struct {
	char type;
	int width;
	int precision;
	char flags;
} Specifier;

int _printf(const char *format, ...) {
	char ch, *str;
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL ||(format[0] == '%'))
		return(-1);

	while (*format != '\0') {
		if (*format == '%') {
			format++;
			if (*format == '%') {
				putchar('%');
				count++;
			} else if (*format == 'c') {
				Specifier specifier = {
					.type = 'c',
					.width = 1,
					.precision = 0,
					.flags = '\0',
				};
				ch = (char)va_arg(args, int);
				printf(format, specifier, ch);
				count++;
			} else if (*format == 's') {
				Specifier specifier = {
					.type = 's',
					.width = 0,
					.precision = 0,
					.flags = '\0',
				};
				str = va_arg(args, char *);
				printf(format, specifier, str);
				count++;
			} else if (*format == 'd' || *format == 'i') {
				Specifier specifier = {
					.type = *format,
					.width = 0,
					.precision = 0,
					.flags = '\0',
				};
				printf(format, specifier);
				count++;
			} else {
				putchar(*format);
				count++;
			}
			format++;
		} else {
			putchar(*format);
			count++;
		}
	}
	va_end(args);

	return count;
}
