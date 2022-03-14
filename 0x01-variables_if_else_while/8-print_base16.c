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
char ch = 'a';

for (x = 0; x < 10; x++)
{
putchar(x % 10 + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}