#include "main.h"

/**
 * print_percent - print a percent character
 * @format: format text (char *)
 * @args: unused (va_list)
 * Return: length of printed text (int)
 */
int *print_percent(const char *format, va_list args)
{
	(void)args;
	(void) format;

	_putchar('%');

	return (make_res(1, 1));
}
