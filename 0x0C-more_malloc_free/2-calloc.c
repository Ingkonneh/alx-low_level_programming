#include <stdlib.h>
#include "main.h"
/**
 * _memset - Fills a memory area with a specified byte value.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to copy into the memory area.
 * @n: The number of times to copy the byte value.
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}

