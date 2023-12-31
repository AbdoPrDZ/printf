#include "main.h"

/**
 * _printf - print based the format and args
 * @format: format string
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
	int *(*printer)(const char *format, va_list args), *result;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == 'h')
				printer = get_printer(format[i + 2], TYPE_SHORT);
			else if (format[i + 1] == 'l')
				printer = get_printer(format[i + 2], TYPE_LONG);
			else
				printer = get_printer(format[i + 1], TYPE_SIMPLE);

			if (printer != NULL)
			{
				result = printer(format + i, args);
				i += result[0];
				len += result[1];
			}
			else
				_putchar('%'), len++;
		}
		else
			_putchar(format[i]), len++;
	}

	va_end(args);

	return (len);
}
