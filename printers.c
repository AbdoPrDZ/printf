#include "main.h"
#include <stdlib.h>

/**
 * print_char - print an char
 * @args: args to get a char
 * Return: length of printed text
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

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

int convert_and_print(unsigned long int n, int base, int bit_size, int upper_on_hex)
{
	unsigned int tmp;
	int i, d, nlen = 0, len = 0;
	char *sn;

	tmp = n;
	for (i = 0; tmp > 0; i++, nlen++)
		tmp = tmp / base;

	if (bit_size > nlen)
	{
		for (i = 0; i < bit_size - nlen; i++)
			_putchar('0');
		nlen += bit_size - nlen;
	}

	sn = malloc(nlen * sizeof(int));

	for (i = 0; n > 0; i++)
	{
		d = n % base;
		if (base == 16 && d > 9)
			sn[i] = (upper_on_hex == 1 ? 'A' : 'a') + d - 10;
		else
			sn[i] = '0' + d;
		n = n / base;
	}

	for (; i >= 0; i--, len++)
		_putchar(sn[i]);

	free(sn);

	return (len);
}

/**
 * print_int - print int number
 * @args: args to get a number
 * Return: length of printed text
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
		_putchar('-'), n = n * (-1);

	return (convert_and_print(n, 10, 0, 0) + (n < 0 ? 1 : 0));
}

/**
 * print_l_int - print int number
 * @args: args to get a number
 * Return: length of printed text
 */
int print_l_int(va_list args)
{
	long int n = va_arg(args, long int);

	if (n < 0)
		_putchar('-'), n = n * (-1);

	return (convert_and_print(n, 10, 0, 0) + (n < 0 ? 1 : 0));
}

/**
 * print_h_int - print int number
 * @args: args to get a number
 * Return: length of printed text
 */
int print_h_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
		_putchar('-'), n = n * (-1);

	return (convert_and_print(n, 10, 0, 0) + (n < 0 ? 1 : 0));
}

int print_bin(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);

	return (convert_and_print(n, 2, 0, 0));
}

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 10, 0, 0));
}

int print_l_unsigned(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);

	return (convert_and_print(n, 10, 0, 0));
}

int print_h_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 10, 0, 0));
}

int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 8, 0, 0));
}

int print_l_octal(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);

	return (convert_and_print(n, 8, 0, 0));
}

int print_h_octal(va_list args)
{
	int n = va_arg(args, int);

	return (convert_and_print(n, 8, 0, 0));
}

int print_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 16, 0, 0));
}

int print_l_hexadecimal(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);

	return (convert_and_print(n, 16, 0, 0));
}

int print_h_hexadecimal(va_list args)
{
	int n = va_arg(args, int);

	return (convert_and_print(n, 16, 0, 0));
}

int print_upper_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (convert_and_print(n, 16, 0, 1));
}

int print_l_upper_hexadecimal(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);

	return (convert_and_print(n, 16, 0, 1));
}

int print_h_upper_hexadecimal(va_list args)
{
	int n = va_arg(args, int);

	return (convert_and_print(n, 16, 0, 1));
}

int print_s_string(va_list args)
{
	int i, c, len = 0;
	char *s;

	s = va_arg(args, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c > 0 && c < 32) || (c > 127))
		{
			_putchar('\\'), _putchar('x');
			convert_and_print(c, 16, 2, 1);
			len += 4;
		}
		else
			_putchar(s[i]), len++;
	}

	return (len);
}

int print_address(va_list args)
{
	long int n;

	n = va_arg(args, long int);

	_putchar('0'), _putchar('x');

	return (convert_and_print(n, 16, 0, 0) + 2);
}

int print_reversed(va_list args)
{
	int i, len;

	char *s = va_arg(args, char*);

	for (i = 0, len = 0; s[i] != '\0'; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (len);
}

int print_rot13(va_list args)
{
	int i;
	char c;
	char *s = va_arg(args, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			if (s[i] >= 'N')
				c = 'A' + s[i] - 'N';
			else
				c = s[i] + 'N' - 'A';
		else if (s[i] >= 'a' && s[i] <= 'z')
			if (s[i] >= 'n')
				c = 'a' + s[i] - 'n';
			else
				c = s[i] + 'n' - 'a';
		else
			c = s[i];

		_putchar(c);
	}

	return (i);
}
