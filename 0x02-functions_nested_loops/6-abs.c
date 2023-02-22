include"main.h"
/**
 * _abs - compute n to +
 * @n: number
 * Return : 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
