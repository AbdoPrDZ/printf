#include "main.h"

/**
 * get_printer - get the printer function
 * @fc: format code
 * Return: printer function
 */
int (*get_printer(char fc, int type))(va_list)
{
	printer_t *printers;
	int i = 0;

	printer_t n_printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexadecimal},
		{'X', print_upper_hexadecimal},
		{'S', print_s_string},
		{'p', print_address},
		{'r', print_reversed},
		{'R', print_rot13},
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

	if (type == 2)
		printers = l_printers;
	else if (type == 3)
		printers = h_printers;
	else
		printers = n_printers;

	while (printers[i].printer != NULL)
	{
		if (printers[i].fc == fc)
			return (printers[i].printer);

		i++;
	}

	return (NULL);
}
