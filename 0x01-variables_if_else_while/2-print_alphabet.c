#include <stdio.h>
/**
 * main - main block
 * Description: Use tge 'putchar' function to write the
 * alphabets in lower case
 *
 * return: always 0
 */

int main(void)

{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
