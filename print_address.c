#include "main.h"

/**
 * print_address - print a memory address
 * @format: format text (char *)
 * @args: arguments to get a memory address (va_list)
 * Return: length of printed text (int)
 */
int *print_address(const char *format, va_list args)
{
	unsigned long n = va_arg(args, unsigned long);
	(void)format;

	_putchar('0'), _putchar('x');

	return (make_res(1, convert_and_print(n, 16, 0, 0, 0, 0) + 2));
}
