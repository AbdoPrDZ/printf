#include "main.h"

/**
 * print_hexadecimal - print an unsigned hexadecimal number
 * @args: arguments to get an unsigned hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int print_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 16, 0, 0));
}

/**
 * print_l_hexadecimal - print a long unsigned hexadecimal number
 * @args: arguments to get a long unsigned hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int print_l_hexadecimal(va_list args)
{
	unsigned long n = va_arg(args, unsigned long);

	return (convert_and_print(n, 16, 0, 0));
}

/**
 * print_h_hexadecimal - print a hexadecimal number (short int)
 * @args: arguments to get a hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int print_h_hexadecimal(va_list args)
{
	unsigned short n = va_arg(args, unsigned int);

	return (convert_and_print(n, 16, 0, 0));
}

/**
 * print_upper_hexadecimal - print an uppercase unsigned hexadecimal number
 * @args: arguments to get an uppercase unsigned hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int print_upper_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 16, 0, 1));
}

/**
 * print_l_upper_hexadecimal - print an uppercase lu hexadecimal number
 * @args: arguments to get an uppercase lu hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int print_l_upper_hexadecimal(va_list args)
{
	unsigned long n = va_arg(args, unsigned long);

	return (convert_and_print(n, 16, 0, 1));
}
