#include "main.h"
#include <stdlib.h>

/**
 * make_res - make printer result
 * @fi: format pass steps (int)
 * @pi: print length (int)
 * Return: pointer of result
 */
int *make_res(int fi, int pi)
{
	int *result = (int *)malloc(sizeof(int) * 2);

	result[0] = fi;
	result[1] = pi;

	return (result);
}
