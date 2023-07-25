#include "main.h"

char buffer[MAX_BUFFER];
int buff_idx = 0;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c) {
  buffer[buff_idx++] = c; 
  if(buff_idx == MAX_BUFFER) {
    flush_buffer();
  }
  return 0;
}

/**
 * flush_buffer - ..
 */

void flush_buffer() {
  write(1, buffer, buff_idx);
  buff_idx = 0;
}

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: string to get printed
 *
 * Return: ...
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
