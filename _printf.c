#include "_printf.h"

/**
 * _printf - print based the format and args
 * @format: format string
 * Return: length of printed string
*/
int _printf(const char *format, ...)
{
	int i = 0, strlen = 0;
	va_list args;
	int (*printer)(va_list args);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			printer = get_printer(format[i + 1]);
			if (printer != NULL)
				strlen += printer(args);
			else
				_putchar('%'), _putchar(format[i + 1]);
			i++;
		}
		else
			_putchar(format[i]), strlen++;
	}

	va_end(args);

	return (strlen);
}
