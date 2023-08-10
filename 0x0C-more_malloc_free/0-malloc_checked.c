#include "main.h"

/**
 * *malloc_checked - cause ormal process termination with a status value of 98
 *
 * @b: number of byts to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
