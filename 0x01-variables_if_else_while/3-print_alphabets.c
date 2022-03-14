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
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(toupper(ch));
}
return (0);
}