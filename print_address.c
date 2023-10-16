#include "main.h"

/**
 * print_address - print a memory address
 * @args: arguments to get a memory address (va_list)
 * Return: length of printed text (int)
 */
int print_address(va_list args)
{
	unsigned long n = va_arg(args, unsigned long);

	_putchar('0'), _putchar('x');

	return (convert_and_print(n, 16, 0, 0) + 2);
}
