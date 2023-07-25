#include "main.h"

/**
 * convert - ..
 * @num: ..
 * @base: ..
 * @lowercase: ..
 * Return: ..
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * print_pointer - ..
 * @list: ..
 * Return: ..
 */

int print_pointer(va_list list)
{
	char *str;
	void *p = va_arg(list, void*);

	register int count = 0;


	if (!p)
		return (_puts("(nil)"));
	str = convert((unsigned long int)p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
