include "main.h"
/** _isalpha - checks
 *@c: The character to be cgecked
 * Return: 1 if cgaracter is letter
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z')) || ((c >= 'A' && c<= 'Z'))
return (1);
else
return (0);
}
