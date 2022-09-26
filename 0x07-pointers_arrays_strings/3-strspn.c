#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search 
 * @accept: accept string
 *Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
