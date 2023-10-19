#include "main.h"

/**
 * print_rot13 - print a string encrypted with ROT13
 * @format: format text (char *)
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int *print_rot13(const char *format, va_list args)
{
	int i;
	char c, *s = va_arg(args, char *);
	(void)format;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			if (s[i] >= 'N')
				c = 'A' + s[i] - 'N';
			else
				c = s[i] + 'N' - 'A';
		else if (s[i] >= 'a' && s[i] <= 'z')
			if (s[i] >= 'n')
				c = 'a' + s[i] - 'n';
			else
				c = s[i] + 'n' - 'a';
		else
			c = s[i];

		_putchar(c);
	}

	return (make_res(1, i));
}
