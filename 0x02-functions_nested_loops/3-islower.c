#include"main.h"
/**
 * _islower - checks for lowercase
 * @c: char input
 * Return: 1 if lower ,0 if upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
