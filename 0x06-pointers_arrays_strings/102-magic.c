#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function demonstrates pointer manipulation
 * to modify an element in an array.
 * * Return: Always 0.
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

    /* Corrected line to indirectly modify a[2] using p */
*(p + 5) = 98;

printf("a[2] = %d\n", a[2]);
return (0);
}
