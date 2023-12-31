#include "main.h"

/**
 * print_octal - print an unsigned octal number
 * @format: format text (char *)
 * @args: arguments to get an unsigned octal number (va_list)
 * Return: length of printed text (int)
 */
int *print_octal(const char *format, va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(1, convert_and_print(n, 8, 0, 0, 0, 0)));
}

/**
 * print_l_octal - print a long unsigned octal number
 * @format: format text (char *)
 * @args: arguments to get a long unsigned octal number (va_list)
 * Return: length of printed text (int)
 */
int *print_l_octal(const char *format, va_list args)
{
	unsigned long n = va_arg(args, unsigned long);
	(void)format;

	return (make_res(2, convert_and_print(n, 8, 0, 0, 0, 0)));
}

/**
 * print_h_octal - print an octal number (short int)
 * @format: format text (char *)
 * @args: arguments to get an octal number (va_list)
 * Return: length of printed text (int)
 */
int *print_h_octal(const char *format, va_list args)
{
	unsigned short n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(2, convert_and_print(n, 8, 0, 0, 0, 0)));
}
