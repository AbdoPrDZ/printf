#include "main.h"

int check_fc(char fc)
{
	if (fc == 'c' || fc == 's')
		return (1);
	return (0);
}

int str_marge(int strlen, va_list args)
{
	int i = 0;

	char *sub_str = va_arg(args, char*);

	while (sub_str[i] != '\0')
	{
		putchar(sub_str[i]);
		i++;
	}

	return (strlen + i);
}

int _printf(const char *format, ...)
{
	int i = 0, j = 0, strlen = 0;
	char *str;
	char fc;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && check_fc(format[i + 1]) == 1)
		{
			fc = format[i + 1];
			switch (fc)
			{
			case 'c':
				strlen++;
				putchar(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char*);
				while (str[j] != '\0')
				{
					putchar(str[j]);
					strlen++;
					j++;
				}

			default:
				break;
			}
			i++;
		}
		else
		{
			putchar(format[i]);
			strlen++;
		}
		i++;
	}

	va_end(args);

	return (strlen);
}
