#include"main.h"

/**
 * print_alphabet_x10 - printing from a to z x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 0;

	while (b <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
		b++;
	}
}
