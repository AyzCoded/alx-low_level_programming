#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: the character
 * Return: 1 is the letter is lower case or otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
