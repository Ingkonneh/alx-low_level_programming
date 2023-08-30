#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - recursive fxn to be prited
 * @s: The pointer of the string fxn
 * Return : nothing
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
}
}
