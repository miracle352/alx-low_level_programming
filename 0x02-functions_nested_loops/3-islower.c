#include "main"
/**
 * _islower-function to check for lowercase character
 * @c: is the int that will use for the function
 * return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
