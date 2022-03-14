#include <stdio.h>
/**
 * main - entry point
 *
 * using ASCII
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
char ch = 'a';

for (ch='a'; ch<='z'; ch++);
{
putchar(ch);
putchar(toupper(ch));
putchar('\n');
return (0);
}