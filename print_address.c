#include "printf.h"

/**
 * print_address - print a memory address
 * @args: arguments to get a memory address (va_list)
 * Return: length of printed text (int)
 */
int print_address(va_list args)
{
	long int n;

	n = va_arg(args, long int);

	_putchar('0'), _putchar('x');

	return (convert_and_print(n, 16, 0, 0) + 2);
}
