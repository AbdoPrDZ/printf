#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("m-len: %d, p-len2: %d\n", len, len2);

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	len = _printf("Length:[%d, %i]\n", len, len2);
	len2 = printf("Length:[%d, %i]\n", len2, len2);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Length short:[%hd, %hi]\n", len, len2);
	len2 = printf("Length short:[%hd, %hi]\n", len2, len2);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Length long:[%ld, %li]\n", len, len2);
	len2 = printf("Length long:[%ld, %li]\n", len2, len2);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Negative short:[%hd]\n", -762534);
	len2 = printf("Negative short:[%hd]\n", -762534);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Negative long:[%ld]\n", -762534);
	len2 = printf("Negative long:[%ld]\n", -762534);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len2 = _printf("Unsigned:[%u]\n", ui);
	len = printf("Unsigned:[%u]\n", ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len2 = _printf("Unsigned long:[%lu]\n", ui);
	len = printf("Unsigned long:[%lu]\n", ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len2 = _printf("Unsigned short:[%hu]\n", ui);
	len = printf("Unsigned short:[%hu]\n", ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Unsigned short hexadecimal:[%hx, %hX]\n", ui, ui);
	len2 = printf("Unsigned short hexadecimal:[%hx, %hX]\n", ui, ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Unsigned long hexadecimal:[%lx, %lX]\n", ui, ui);
	len2 = printf("Unsigned long hexadecimal:[%lx, %lX]\n", ui, ui);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Address:[%p]\n", addr);
	len2 = printf("Address:[%p]\n", addr);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("Unknown:[%r]\n", "abcd");
	len2 = printf("Unknown:[%r]\n", "abcd");
	printf("m-len: %d, p-len2: %d\n", len, len2);

	len = _printf("'m-> +010d: %+010d'\n", -10);
	len2 = printf("'p-> +010d: %+010d'\n", -10);
	printf("m-len: %d, p-len2: %d\n", len, len2);

	return (0);
}