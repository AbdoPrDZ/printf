#include "main.h"
#include <stdio.h>

/**
 * print_reversed - print a string in reverse order
 * @format: format text (char *)
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int *print_reversed(const char *format, va_list args)
{
	int i, len;
	char *s = va_arg(args, char *);
	(void)format;

	if (!s)
		return (make_res(1, 0));

	for (i = 0, len = 0; s[i] != '\0'; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (make_res(1, len));
}
