#include"main.h"

/**
 * print_alphabet_x10 - printing from a to z x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 0 ;

	for (b, b <= 9 , b++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}