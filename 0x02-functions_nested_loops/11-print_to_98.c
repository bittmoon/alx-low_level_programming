#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - prints to 98 
 * @n: number
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	else
	{
		printf("%d, " n);
		n--;
	}
}
