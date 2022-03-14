#include <stdio.h>
/**
 * main - entry point
 *
 * using ASCII
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* first chac to be written*/
char ch = 'a';

/*chac to be written in stdout*/
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
