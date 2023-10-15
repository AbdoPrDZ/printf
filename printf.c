#include "printf.h"

/**
 * _printf - print based the format and args
 * @format: format string
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;
	int (*printer)(va_list args);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'h')
				printer = get_printer(format[i + 2], TYPE_SHORT);
			else if (format[i + 1] == 'l')
				printer = get_printer(format[i + 2], TYPE_LONG);
			else
				printer = get_printer(format[i + 1], TYPE_SIMPLE);

			if (printer != NULL)
			{
				len += printer(args);
				i += (format[i + 1] == 'l' || format[i + 1] == 'h') ? 2 : 1;
			}
			else
				_putchar('%');
		}
		else
			_putchar(format[i]), len++;
	}

	va_end(args);

	return (len);
}
