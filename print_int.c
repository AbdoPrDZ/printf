#include "printf.h"
#include <stdio.h>

/**
 * print_int - print an integer number
 * @args: arguments to get an integer number (va_list)
 * Return: length of printed text (int)
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
		_putchar('-');

	return (convert_and_print(n < 0 ? -n : n, 10, 0, 0) + (n < 0 ? 1 : 0));
}

/**
 * print_l_int - print a long integer number
 * @args: arguments to get a long integer number (va_list)
 * Return: length of printed text (int)
 */
int print_l_int(va_list args)
{
	long int n = va_arg(args, long int);

	if (n < 0)
		_putchar('-');

	return (convert_and_print(n < 0 ? -n : n, 10, 0, 0) + (n < 0 ? 1 : 0));
}

/**
 * print_h_int - print an integer number (short int)
 * @args: arguments to get an integer number (va_list)
 * Return: length of printed text (int)
 */
int print_h_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
		_putchar('-');

	return (convert_and_print(n < 0 ? -n : n, 10, 0, 0) + (n < 0 ? 1 : 0));
}
