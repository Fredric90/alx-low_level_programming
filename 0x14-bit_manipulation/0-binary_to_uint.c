
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int n;

	if (b == NULL)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}

	for (power = 1, total = 0, n--; n >= 0; n--, power *= 2)
	{
		if (b[n] == '1')
			total += power;
	}

	return (total);
}
