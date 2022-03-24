#include "main.h"
/**
 * recursion_binary - convert an integer to binary
 * @n: integer
 * @cont:counter
 * Return: number of characters printed
 */
int recursion_binary(int n, int cont)
{
	if (n)
	{
		recursion_binary(n / 2, cont + 1);
		_putchar((n % 2) + '0');
	}
	return (cont);
}
/**
 * get_binary - calls the get binary function
 * @b: integer
 * Return:  number of characters printed
 */
int get_binary(va_list b)
{
	int cont = 0;
	int n = va_arg(b, int);

	recursion_binary(n, cont);
	return (cont);
}
