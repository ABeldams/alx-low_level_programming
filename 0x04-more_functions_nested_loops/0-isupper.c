#include "main.h" 
/** 
*_isupper - function that verifies if acharacter is uppercase or not 
*@c: tested character 
*Return: returns 1 if it is uppercase ,0if not
*/ 
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1); 
return (0);
}
