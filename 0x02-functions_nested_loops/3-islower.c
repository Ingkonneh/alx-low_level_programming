#include "main.h"
/**
 * _islower - Check for lowercase character
 * @c: The character to be checked
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}

