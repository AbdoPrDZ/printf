#include "main.h"

/**
 * print_char - print a character
 * @args: arguments to get a character (va_list)
 * Return: length of printed text (int)
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);

	return (1);
}
