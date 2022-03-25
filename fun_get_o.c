#include "main.h"
/**
 * recursion_o - Unsigned octal conversion of an integer
 * @n: integer
 * @cont:counter
 * Return: number of characters printed
 */
int recursion_o(unsigned int n, int cont)
{
	int cont_aux = 0;

	if (n)
	{
		cont_aux = (1 + recursion_o(n / 8, cont));
		_putchar((n % 8) + '0');
	}
	return (cont_aux);
}
/**
 * get_o - Unsigned octal conversion of an integer
 * @o: integer
 * Return: number of characters printed
 */
int get_o(va_list o)
{
	int cont = 0;
	unsigned int n = va_arg(o, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	return (recursion_o(n, cont));
}
