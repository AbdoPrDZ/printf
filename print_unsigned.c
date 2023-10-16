#include "main.h"

/**
 * print_unsigned - print an unsigned integer number
 * @args: arguments to get an unsigned integer number (va_list)
 * Return: length of printed text (int)
 */
int print_unsigned(va_list args)
{
	unsigned n = va_arg(args, unsigned);

	return (convert_and_print(n, 10, 0, 0));
}

/**
 * print_l_unsigned - print a long unsigned integer number
 * @args: arguments to get a long unsigned integer number (va_list)
 * Return: length of printed text (int)
 */
int print_l_unsigned(va_list args)
{
	unsigned long n = va_arg(args, unsigned long);

	return (convert_and_print(n, 10, 0, 0));
}

/**
 * print_h_unsigned - print an unsigned integer number (short int)
 * @args: arguments to get an unsigned integer number (va_list)
 * Return: length of printed text (int)
 */
int print_h_unsigned(va_list args)
{
	unsigned short n = va_arg(args, unsigned);

	return (convert_and_print(n, 10, 0, 0));
}
