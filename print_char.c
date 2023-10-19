#include "main.h"

/**
 * print_char - print a character
 * @format: format text (char *)
 * @args: arguments to get a character (va_list)
 * Return: length of printed text (int)
 */
int *print_char(const char *format, va_list args)
{
	unsigned long c = va_arg(args, unsigned long);
	(void) format;

	_putchar(c);

	return (make_res(1, 1));
}
