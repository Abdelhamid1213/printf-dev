#include "main.h"

/**
 * handler - ..
 * @format: ..
 * @flags: ..
 * @args: ..
 * Return: ..
 */

int handler(const char *format, flag_t flags[], va_list args)
{
	int i, j, r_val, output;

	output = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; flags[j].s != NULL; j++)
			{
				if (format[i + 1] == flags[j].s[0])
				{
					r_val = flags[j].f(args);
					if (r_val == -1)
						return (-1);
					output += r_val;
					break;
				}
			}
			if (flags[j].s == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					output = output + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			output++;
		}
	}
	_putchar(-1);
	return (output);
}
