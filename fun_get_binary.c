#include "main.h"
/**
 * recursion_binary - convert an integer to binary
 * @n: integer
 * @cont:counter
 * Return: number of characters printed
 */
int recursion_binary(unsigned int n, int cont)
{
	int cont_aux = 0;

	if (n)
	{
		cont_aux = (1 + recursion_binary(n / 2, cont + 1));
		_putchar((n % 2) + '0');
	}
	return (cont_aux);
}
/**
 * get_binary - calls the get binary function
 * @b: integer
 * Return:  number of characters printed
 */
int get_binary(va_list b)
{
	int cont = 0;
	unsigned int n = va_arg(b, int);
	if (n == 0)
	{
		_putchar('0');
		return(1);
	}
	return (recursion_binary(n, cont));
}
