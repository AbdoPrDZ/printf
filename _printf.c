#include "main.h"

/**
 * check_fc - check for format char if is c or s
 * @fc: format char
 * Return: 1 if true or 0 if false
 */
int check_fc(char fc)
{
	if (fc == 'c' || fc == 's' || fc == '%')
		return (1);
	return (0);
}

/**
 * _printf - print based the format and args
 * @format: format string
 * Return: length of printed string
*/
int _printf(const char *format, ...)
{
	int i = 0, strlen = 0;
	char *str;
	char fc;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && check_fc(format[i + 1]) == 1)
		{
			fc = format[i + 1];
			switch (fc)
			{
			case 'c':
				strlen++;
				_putchar(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char*);
				strlen += _printf(str);
				break;
			case '%':
				strlen++;
				_putchar('%');
				break;
			default:
				break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			strlen++;
		}
	}
	va_end(args);

	return (strlen);
}
