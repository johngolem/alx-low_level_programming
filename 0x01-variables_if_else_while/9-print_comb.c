#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * using ASCII
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x % 10 + '0');
}
if (x != 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}