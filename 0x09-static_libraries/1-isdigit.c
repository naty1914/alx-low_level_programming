#include "main.h"
/**
*_isdigit- function that checks if a  character is a digit or not
*@c:  character to be check
*Return: returns 1 if it is a digit  , 0  otherwise
*/

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
return (1);

return (0);
}
