#include "_printf.h"
#include <stdlib.h>

/**
 * print_char - print an char
 * @args: args to get a char
 * Return: length of printed text
 */
int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);

	_putchar(c);

	return (1);
}

/**
 * print_string - print an string
 * @args: args to get a string
 * Return: length of printed text
 */
int print_string(va_list args)
{
	return (_printf(va_arg(args, char*)));
}

/**
 * print_percent - print an percent
 * @args: unused
 * Return: length of printed text
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_int - print int number
 * @args: args to get a number
 * Return: length of printed text
 */
int print_int(va_list args)
{
	int n, i, len = 0;
	char *s;

	n = va_arg(args, int);

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
