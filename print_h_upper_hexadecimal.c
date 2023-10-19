#include "main.h"

/**
 * print_h_upper_hexadecimal - print an uppercase short hexadecimal number
 * @format: format text (char *)
 * @args: arguments to get an uppercase hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int *print_h_upper_hexadecimal(const char *format, va_list args)
{
	unsigned short n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(2, convert_and_print(n, 16, 0, 1, 0, 0)));
}
