#include "main.h"


/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if endian is big, 1 if endian is small
 */
int get_endianness(void)
{
	int m;
	char *b;

	a = 1;
	b = (char *)&m;
	return (*b);
}
