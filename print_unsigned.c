#include "main.h"

/**
 * print_unsigned - print an unsigned integer number
 * @format: format text (char *)
 * @args: arguments to get an unsigned integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_unsigned(const char *format, va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(1, convert_and_print(n, 10, 0, 0, 0, 0)));
}

/**
 * print_l_unsigned - print a long unsigned integer number
 * @format: format text (char *)
 * @args: arguments to get a long unsigned integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_l_unsigned(const char *format, va_list args)
{
	unsigned long n = va_arg(args, unsigned long);
	(void)format;

	return (make_res(2, convert_and_print(n, 10, 0, 0, 0, 0)));
}

/**
 * print_h_unsigned - print an unsigned integer number (short int)
 * @format: format text (char *)
 * @args: arguments to get an unsigned integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_h_unsigned(const char *format, va_list args)
{
	unsigned short n = va_arg(args, int);
	(void)format;

	return (make_res(2, convert_and_print(n, 10, 0, 0, 0, 0)));
}
