#include "main.h"

/**
 * print_string - print a string
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int print_string(va_list args)
{
	return (_printf(va_arg(args, char *)));
}

/**
 * print_s_string - print a string with special characters escaped
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int print_s_string(va_list args)
{
	int i, c, len = 0;
	char *s;

	s = va_arg(args, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c > 0 && c < 32) || (c > 127))
		{
			_putchar('\\'), _putchar('x');
			convert_and_print(c, 16, 2, 1);
			len += 4;
		}
		else
			_putchar(s[i]), len++;
	}

	return (len);
}
