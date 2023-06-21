#include "main.h"


/**
 *_islower - To check for lowercase alphabet.
 *@c: It serve as ascii value.
 *
 *Return: always 0.
 */

int _islower(int c)
{

if (c > 97 && c < 122)
{
return (1);
}
else
{
return (0);
}

}
