#include "main.h"

/**
 * _printf - format and print data
 *
 * @format: controls the output
 *
 * Return: length of string printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int output;

	flag_t flags[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{"p", print_pointer},
		{"S", print_bigS},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);
	output = handler(format, flags, args);
	va_end(args);

	return (output);
}
