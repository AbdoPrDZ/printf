#include "main.h"

/**
 * print_h_upper_hexadecimal - print an uppercase short hexadecimal number
 * @args: arguments to get an uppercase hexadecimal number (va_list)
 * Return: length of printed text (int)
 */
int print_h_upper_hexadecimal(va_list args)
{
	int n = va_arg(args, int);

	return (convert_and_print(n, 16, 0, 1));
}
