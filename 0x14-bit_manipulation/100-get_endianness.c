#include "main.h"

/**
 * get_endianness - confirms the size of the endian of a machine
 * Return: 0 for large, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
