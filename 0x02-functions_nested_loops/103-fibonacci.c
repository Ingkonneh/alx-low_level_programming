#include <stdio.h>
/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: 0 to indicate successful completion.
 */
int main(void)
{
int i = 0;
long x = 1, y = 2, sum = y;
while (x + y < 4000000)
{
y += x;
if (y % 2 == 0)
	sum += y;
x = y - x;
++i;
}
printf("%ld\n", sum);
return (0);
}
