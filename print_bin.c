#include "main.h"

/**
 * print_bin - print an unsigned binary number
 * @args: arguments to get an unsigned binary number (va_list)
 * Return: length of printed text (int)
 */
int print_bin(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);

	return (convert_and_print(n, 2, 0, 0));
}
