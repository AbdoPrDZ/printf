#include "main.h"
#include <stdlib.h>

/**
 * convert_and_print - Convert and print a number with a specified base
 * @n: Number to be converted and printed (unsigned long int)
 * @base: Base for conversion (int)
 * @bsize: Minimum number of digits to print (int)
 * @upper_on_hex: Flag to print uppercase characters in hexadecimal (int)
 * Return: Length of printed text (int)
 */
int convert_and_print(unsigned long int n, int base, int bsize, int upper_hex)
{
	unsigned int tmp;
	int i, d, nlen = 0, len = 0;
	char *sn;

	tmp = n;
	for (i = 0; tmp > 0; i++, nlen++)
		tmp = tmp / base;

	if (bsize > nlen)
	{
		for (i = 0; i < bsize - nlen; i++)
			_putchar('0');
		nlen += bsize - nlen;
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
