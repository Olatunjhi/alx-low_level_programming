#include "main.h"

/**
 *_isalpha - To check for either 'c' is lowercase or uppercase.
 *@c: Is a value in ascii table.
 *
 *Return: always 0, success.
 */

int _isalpha(int c)
{

if ((c > 97 && c < 122) || (c > 65 && c < 90))
{
return (1);
}
else
{
return (0);
}

}
