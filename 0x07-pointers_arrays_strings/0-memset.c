/*
 * file: 0-memset.c
 * author:marie
 */
#include "main.h"

/**
 * _memset: fills the first n character of the memory
 *  pointed to by @s with the constant byte @c.
 *  @s: A pointer to the memory area to be filled.
 *  @c: character to fill the memory area with
 *  @n: number of bytes to be filled
 *  description_memset: over there
 *  return: pointer to the meory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;


	for (index = 0; index < n; index++)
	       memory[index] = value;

return(memory);
}

