#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0 
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
