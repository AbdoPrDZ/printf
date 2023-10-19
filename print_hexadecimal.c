#include "main.h"

/**
 * print_hexadecimal - print an unsigned hexadecimal number
 * @format: format text (char *)
 * @args: arguments to get an unsigned hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int *print_hexadecimal(const char *format, va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(1, convert_and_print(n, 16, 0, 0, 0, 0)));
}

/**
 * print_l_hexadecimal - print a long unsigned hexadecimal number
 * @format: format text (char *)
 * @args: arguments to get a long unsigned hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int *print_l_hexadecimal(const char *format, va_list args)
{
	unsigned long n = va_arg(args, unsigned long);
	(void)format;

	return (make_res(2, convert_and_print(n, 16, 0, 0, 0, 0)));
}

/**
 * print_h_hexadecimal - print a hexadecimal number (short int)
 * @format: format text (char *)
 * @args: arguments to get a hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int *print_h_hexadecimal(const char *format, va_list args)
{
	unsigned short n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(2, convert_and_print(n, 16, 0, 0, 0, 0)));
}

/**
 * print_upper_hexadecimal - print an uppercase unsigned hexadecimal number
 * @format: format text (char *)
 * @args: arguments to get an uppercase unsigned hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int *print_upper_hexadecimal(const char *format, va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	(void)format;

	return (make_res(1, convert_and_print(n, 16, 0, 1, 0, 0)));
}

/**
 * print_l_upper_hexadecimal - print an uppercase lu hexadecimal number
 * @format: format text (char *)
 * @args: arguments to get an uppercase lu hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int *print_l_upper_hexadecimal(const char *format, va_list args)
{
	unsigned long n = va_arg(args, unsigned long);
	(void)format;

	return (make_res(2, convert_and_print(n, 16, 0, 1, 0, 0)));
}
