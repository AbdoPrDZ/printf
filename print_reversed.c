#include "printf.h"

/**
 * print_reversed - print a string in reverse order
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int print_reversed(va_list args)
{
	int i, len;

	char *s = va_arg(args, char *);

	for (i = 0, len = 0; s[i] != '\0'; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (len);
}
