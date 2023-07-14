#include "main.h"

/**
 * check_specifier - checks if character is valid and assigns
 * function to print
 * @format: the specifier
 *
 * Return: points to function on success
 * NULL on error
*/

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_hex},
		{"i", print_integer},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
