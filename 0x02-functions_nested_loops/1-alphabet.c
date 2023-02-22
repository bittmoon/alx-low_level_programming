#include"main.h"

/**
 * print_alphabet - printing from a to z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
