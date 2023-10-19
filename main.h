#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

#define TYPE_SIMPLE 1
#define TYPE_LONG 2
#define TYPE_SHORT 3

/**
 * struct printer - Struct printer
 * @fc: format code
 * @printer: The printer function
 */
typedef struct printer
{
	char fc;
	int *(*printer)(const char *format, va_list args);
} printer_t;

int _putchar(char c);
int str2int(char *str);
int convert_and_print_helper(long int n, int base, int bs, int pl, int dp);
int convert_and_print(long int n, int base, int bs, int up, int pl, int dp);
int *make_res(int fi, int pi);

int *print_char(const char *format, va_list args);
int *print_string(const char *format, va_list args);
int *print_percent(const char *format, va_list args);
int *print_int(const char *format, va_list args);
int *print_plus_int(const char *format, va_list args);
int *print_l_int(const char *format, va_list args);
int *print_h_int(const char *format, va_list args);
int *print_bin(const char *format, va_list args);
int *print_unsigned(const char *format, va_list args);
int *print_l_unsigned(const char *format, va_list args);
int *print_h_unsigned(const char *format, va_list args);
int *print_octal(const char *format, va_list args);
int *print_l_octal(const char *format, va_list args);
int *print_h_octal(const char *format, va_list args);
int *print_hexadecimal(const char *format, va_list args);
int *print_l_hexadecimal(const char *format, va_list args);
int *print_h_hexadecimal(const char *format, va_list args);
int *print_upper_hexadecimal(const char *format, va_list args);
int *print_l_upper_hexadecimal(const char *format, va_list args);
int *print_h_upper_hexadecimal(const char *format, va_list args);
int *print_s_string(const char *format, va_list args);
int *print_address(const char *format, va_list args);
int *print_rot13(const char *format, va_list args);
int *print_reversed(const char *format, va_list args);

int *(*get_printer(char fc, int type))(const char *, va_list);

int _printf(const char *format, ...);

#endif /* MAIN_H */
