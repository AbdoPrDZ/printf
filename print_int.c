#include "main.h"
#include <stdlib.h>

/**
 * print_int - print an integer number
 * @format: format text (char *)
 * @args: arguments to get an integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_int(const char *format, va_list args)
{
	int n = va_arg(args, int);
	(void)format;

	return (make_res(1, convert_and_print(n, 10, 0, 0, 0, 0)));
}

/**
 * print_l_int - print a long integer number
 * @format: format text (char *)
 * @args: arguments to get a long integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_l_int(const char *format, va_list args)
{
	long n = va_arg(args, long);
	(void)format;

	return (make_res(2, convert_and_print(n, 10, 0, 0, 0, 0)));
}

/**
 * print_h_int - print an integer number (short int)
 * @format: format text (char *)
 * @args: arguments to get an integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_h_int(const char *format, va_list args)
{
	short n = va_arg(args, int);
	(void)format;

	return (make_res(2, convert_and_print(n, 10, 0, 0, 0, 0)));
}
/**
 * print_plus_int - print an integer number (int)
 * @format: format text (char *)
 * @args: arguments to get an integer number (va_list)
 * Return: length of printed text (int)
 */
int *print_plus_int(const char *format, va_list args)
{
	int i, j, slen, n, sn = 0, pl = 0;
	char *sstr;

	n = va_arg(args, int);

	for (i = 2, slen = 0; format[i] != '\0' && format[i] != 'd'; i++)
		slen++;

	sstr = malloc(sizeof(char) * slen);
	if (!sstr)
		return (make_res(1, 0));
	for (i = 2, j = 0; j < slen; i++, j++)
		sstr[j] = format[i];
	sstr[j] = '\0';

	if (format[3] == '0')
		pl = str2int(sstr);
	else
		sn = str2int(sstr);

	return (make_res(slen + 2, convert_and_print(n, 10, sn, 0, pl, 1)));
}
