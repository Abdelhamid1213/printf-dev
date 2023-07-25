#include "main.h"

/**
 * print_bigS - ..
 * @list: ..
 * Return: ..
 */

int print_bigS(va_list list)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(list, char *);

	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert((unsigned long int)s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
