#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct printer - Struct printer
 * @fc: format code
 * @printer: The printer function
 */
typedef struct printer
{
	char fc;
	int (*printer)(va_list args);
} printer_t;

int _putchar(char c);
int check_fc(char fc);
int (*get_printer(char fc))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H */
