#include <stdio.h>
/**
 * main - Print the characters 0 - 9
 * separated with commas
 *
 * Return: value = 0
 */
int main(void)
{
int n = 0;
while (n <= '9')
{
putchat(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
