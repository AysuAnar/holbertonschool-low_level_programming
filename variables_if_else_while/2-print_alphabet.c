#include <stdio.h>
/**
 *main - prints the alphabetic
 *Return: success
 */
int main(void)
{
char alph = 'a';

while (alph <= 'z')
{
putchar(alph);

alph++;
}
putchar('\n');
return (0);
}
