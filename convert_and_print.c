#include "main.h"
#include <stdlib.h>

/**
 * convert_and_print_helper - handle bs and padding
 * @n: Number to be converted and printed (unsigned long int)
 * @base: Base for conversion (int)
 * @bs: digitals size (int)
 * @pl: Padding left size (int)
 * @dp: 1: Display plus, 0: not display (int)
 * Return: Length of printed text (int)
 */
int convert_and_print_helper(long int n, int base, int bs, int pl, int dp)
{
	long int tmp = n < 0 ? -n : n;
	int i, nlen = n == 0 ? 1 : 0;

	for (i = 0; tmp > 0; i++, nlen++)
		tmp = tmp / base;
	if (pl > nlen)
	{
		for (i = 0; i < pl - (nlen + (dp == 1 || n < 0 ? 1 : 0)); i++)
			_putchar(' ');
		nlen += pl - nlen;
		if (n < 0)
			_putchar('-');
		else if (dp == 1)
			_putchar('+');
	}
	else
	{
		if (n < 0)
			_putchar('-'), nlen++;
		else if (dp == 1)
			_putchar('+'), nlen++;
		if (bs > nlen)
		{
			for (i = 0; i < bs - nlen; i++)
				_putchar('0');
			nlen += bs - nlen;
		}
	}

	return (nlen);
}

/**
 * convert_and_print - Convert and print a number with a specified base
 * @n: Number to be converted and printed (unsigned long int)
 * @base: Base for conversion (int)
 * @bs: digitals size (int)
 * @up: Flag to print uppercase characters in hexadecimal (int)
 * @pl: Padding left size (int)
 * @dp: 1: Display plus, 0: not display (int)
 * Return: Length of printed text (int)
 */
int convert_and_print(long int n, int base, int bs, int up, int pl, int dp)
{
	int i, d, nlen;
	char *nstr;

	nlen = convert_and_print_helper(n, base, bs, pl, dp);

	if (n == 0)
		_putchar('0');
	else
	{
		n = n < 0 ? -n : n;
		nstr = malloc(nlen * sizeof(int));
		if (!nstr)
			return (0);

		for (i = 0; n > 0; i++)
		{
			d = n % base;
			if (base == 16 && d > 9)
				nstr[i] = (up == 1 ? 'A' : 'a') + (d - 10);
			else
				nstr[i] = '0' + d;
			n = n / base;
		}

		nstr[i] = '\0';
		for (; i >= 0; i--)
			_putchar(nstr[i]);

		free(nstr);
	}

	return (nlen);
}
