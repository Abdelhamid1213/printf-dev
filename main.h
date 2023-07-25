#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct flag - ..
 * @s: ..
 * @f: ..
 */

struct flag
{
	char *s;
	int (*f)(va_list);
};
typedef struct flag flag_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int, char);
int print_pointer(va_list list);
int print_bigS(va_list list);
char *convert(unsigned long int num, int base, int lowercase);
int handler(const char *format, flag_t flags[], va_list args);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif
