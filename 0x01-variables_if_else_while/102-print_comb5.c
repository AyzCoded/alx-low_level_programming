#include<stdio.h>
/**
 * main - Entry Point
 * Description: Write a program that prints all
 * possible combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
int i, j;
for (j = 0; j <= 100; j++)
{
for (i = j; i <= 100; i++)
{
if (i > j)
{
putchar(j / 10 + 48);
putchar(j % 10 + 48);
putchar(' ');
putchar(i / 10 + 48);
putchar(i % 10 + 48);
if (j != 98 || i != 99)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
