#include "printf.h"

/**
 * print_percent - print a percent character
 * @args: unused (va_list)
 * Return: length of printed text (int)
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
