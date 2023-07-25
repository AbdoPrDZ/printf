#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_fc - check for format char if is c or s
 * @fc: format char
 * Return: 1 if true or 0 if false
 */
int check_fc(char fc)
{
	if (fc == 'c' || fc == 's' || fc == '%' || fc == 'd' || fc == 'i')
		return (1);
	return (0);
}

/**
 * print_int - print int number
 * @n: number want to print
 * Return: length of printed text
 */
int print_int(int n)
{
	int i, len = 0;
	char *s;

	if (n < 0)
		_putchar('-'), n = n * (-1), len++;

	if (n < 10)
		_putchar('0' + n), len++;
	else
	{
		s = malloc(1 * sizeof(int));
		for (i = 0; n > 0; i++)
		{
			s = realloc(s, (i + 1) * sizeof(int));
			s[i] = '0' + n % 10;
			n = n / 10;
		}

		for (; i >= 0; i--, len++)
			_putchar(s[i]);

		free(s);
	}

	return (len);
}

/**
 * _printf - print based the format and args
 * @format: format string
 * Return: length of printed string
*/
int _printf(const char *format, ...)
{
	int i = 0, strlen = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && check_fc(format[i + 1]) == 1)
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(args, int)), strlen++;
			else if (format[i + 1] == 's')
				strlen += _printf(va_arg(args, char*));
			else if (format[i + 1] == '%')
				_putchar('%'), strlen++;
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
				strlen += print_int(va_arg(args, int));
			i++;
		}
		else
			_putchar(format[i]), strlen++;
	}

	va_end(args);

	return (strlen);
}
