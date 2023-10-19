#include "main.h"

/**
 * get_printer - get the printer function
 * @fc: format code
 * @type: printers type
 * Return: printer function
 */
int *(*get_printer(char fc, int type))(const char *, va_list)
{
	printer_t *printers;
	int i;

	printer_t n_printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'+', print_plus_int},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexadecimal},
		{'X', print_upper_hexadecimal},
		{'S', print_s_string},
		{'p', print_address},
		{'R', print_rot13},
		{'r', print_reversed},
		{'_', NULL},
	};

	printer_t l_printers[] = {
		{'i', print_l_int},
		{'d', print_l_int},
		{'u', print_l_unsigned},
		{'o', print_l_octal},
		{'x', print_l_hexadecimal},
		{'X', print_l_upper_hexadecimal},
		{'_', NULL},
	};

	printer_t h_printers[] = {
		{'i', print_h_int},
		{'d', print_h_int},
		{'u', print_h_unsigned},
		{'o', print_h_octal},
		{'x', print_h_hexadecimal},
		{'X', print_h_upper_hexadecimal},
		{'_', NULL},
	};

	if (type == TYPE_LONG)
		printers = l_printers;
	else if (type == TYPE_SHORT)
		printers = h_printers;
	else
		printers = n_printers;

	for (i = 0; printers[i].printer != NULL; i++)
		if (printers[i].fc == fc)
			return (printers[i].printer);

	return (NULL);
}
