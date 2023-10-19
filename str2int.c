#include "main.h"

/**
 * str2int - convert str to int
 * @str: string want to convert (int)
 * Return: convert integer
 */
int str2int(char *str)
{
	int i = 0, n, sign = 1;

	if (str[i] == '-')
		i++, sign = -1;
	else if (str[i] == '+')
		i++;

	for (n = 0; str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'); i++)
		n = n * 10 + (str[i] - '0');

	return (n * sign);
}
