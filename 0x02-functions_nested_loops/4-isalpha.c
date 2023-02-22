#include"main.h"
/**
 * _isalpha - checks for chars
 * @c: char input
 * Return: 1 if char ,0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		if ( c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
