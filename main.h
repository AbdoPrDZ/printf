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
int (*get_printer(char fc, int type))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int convert_and_print(unsigned long int n, int base, int bsize, int upper_hex);
int print_int(va_list args);
int print_l_int(va_list args);
int print_h_int(va_list args);
int print_bin(va_list args);
int print_unsigned(va_list args);
int print_l_unsigned(va_list args);
int print_h_unsigned(va_list args);
int print_octal(va_list args);
int print_l_octal(va_list args);
int print_h_octal(va_list args);
int print_hexadecimal(va_list args);
int print_l_hexadecimal(va_list args);
int print_h_hexadecimal(va_list args);
int print_upper_hexadecimal(va_list args);
int print_l_upper_hexadecimal(va_list args);
int print_h_upper_hexadecimal(va_list args);
int print_s_string(va_list args);
int print_address(va_list args);
int print_reversed(va_list args);
int print_rot13(va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H */
