#include "main.h"

/**
 * print_bin - print an unsigned binary number
 * @format: format text (char *)
 * @args: arguments to get an unsigned binary number (va_list)
 * Return: length of printed text (int)
 */
int *print_bin(const char *format, va_list args)
{
	unsigned long n = va_arg(args, unsigned long);
	(void)format;

	return (make_res(1, convert_and_print(n, 2, 0, 0, 0, 0)));
}
