#include "main.h"
/**
 * recursion_u - convert an integer to binary
 * @n: integer
 * @cont:counter
 * Return: number of characters printed
 */
int recursion_u(unsigned int n, int cont)
{
	int cont_aux = 0;

	if (n)
	{
		cont_aux = (1 + recursion_u(n / 10, cont + 1));
		_putchar((n % 10) + '0');
	}
	return (cont_aux);
}
/**
 * get_u - calls the get binary function
 * @u: integer
 * Return: number of characters printed
 */
int get_u(va_list u)
{
	int cont = 0;
	unsigned int n = va_arg(u, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	return (recursion_u(n, cont));
}
