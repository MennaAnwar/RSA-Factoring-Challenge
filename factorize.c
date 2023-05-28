#include "factors.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{
	u_int64_t num;
	u_int64_t i;

	num = atoi(buffer);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%ld=%ld*%ld\n", num, num / i, i);
			break;
		}
	}

	return (0);
}
