#include <stdio.h>
/**
 *main - prints all single digit numbers
 *Return: success
 */
int main(void)
{
int digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
