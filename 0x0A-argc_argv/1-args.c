#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints number of argumnts
* @argc: first parameter
* @argv: second parameter
*
* Description: Program prints number  of arguments.* Return : 0 if success
*/
int main(int argc, char**argv)
{
int sum;
for (sum = 0; sum < argc; sum++)
{
*argv[sum] = *argv[sum];
}
printf("%d\n", (sum - q));
return (0);
}
