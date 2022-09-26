#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

			for (i = 0; i < n; i++)
						*(dest + i) =  *(src + i);

				return (dest);
}
