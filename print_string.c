#include "main.h"

/**
 * print_string - print a string
 * @format: format text (char *)
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int *print_string(const char *format, va_list args)
{
	(void)format;
	return (make_res(1, _printf(va_arg(args, char *))));
}

/**
 * print_s_string - print a string with special characters escaped
 * @format: format text (char *)
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int *print_s_string(const char *format, va_list args)
{
	int i, c, len = 0;
	char *s;
	(void)format;

	s = va_arg(args, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c > 0 && c < 32) || (c > 127))
		{
			_putchar('\\'), _putchar('x');
			convert_and_print(c, 16, 2, 1, 0, 0);
			len += 4;
		}
		else
			_putchar(s[i]), len++;
	}

	return (make_res(1, len));
}
