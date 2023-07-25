#include "_printf.h"

/**
 * get_printer - get the printer function
 * @fc: format code
 * Return: printer function
 */
int (*get_printer(char fc))(va_list)
{
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'d', print_int},
		{'_', NULL},
	};

	int i = 0;

	while (printers[i].printer != NULL)
	{
		if (printers[i].fc == fc)
			return (printers[i].printer);

		i++;
	}

	return (NULL);
}
