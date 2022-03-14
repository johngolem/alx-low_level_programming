#include <stdio.h>
/**
 * main function to get characters
 *
 * using ASCII
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* first chac to be written*/
char ch = 'a';

/*chac to be written in stdout*/
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
return (0);
}
