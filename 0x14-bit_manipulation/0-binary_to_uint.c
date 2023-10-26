#include "main.h"


/**
 * binary_to_uint - converts a bin number to unsigned int
 * @b: pointer to string with the bin number
 *
 * Return: unsigned int with decimal value of bin number,
 *0 if error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (d = 0; b[d] != '\0'; d++)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
	}
	for (d = 0; b[d] != '\0'; d++)
	{
		num <<= 1;
		if (b[d] == '1')
			num += 1;
	}
	return (num);
}
