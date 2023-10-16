#include "main.h"
#include <stdlib.h>

/**
 * convert_and_print - Convert and print a number with a specified base
 * @n: Number to be converted and printed (unsigned long int)
 * @base: Base for conversion (int)
 * @bsize: digitals size (int)
 * @upper: Flag to print uppercase characters in hexadecimal (int)
 * Return: Length of printed text (int)
 */
int convert_and_print(unsigned long int n, int base, int bsize, int upper)
{
	unsigned long int tmp = n;
	int i, d, nlen = n == 0 ? 1 : 0;
	char *nstr;

	for (i = 0; tmp > 0; i++, nlen++)
		tmp = tmp / base;

	if (bsize > nlen)
	{
		for (i = 0; i < bsize - nlen; i++)
			_putchar('0');
		nlen += bsize - nlen;
	}

	if (n == 0)
		_putchar('0');
	else
	{
		nstr = malloc(nlen * sizeof(int));
		if (!nstr)
			return (0);

		for (i = 0; n > 0; i++)
		{
			d = n % base;
			if (base == 16 && d > 9)
				nstr[i] = (upper == 1 ? 'A' : 'a') + (d - 10);
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
