#include "main.h"
/**
 *not_convert - is a function that checks the malloc
 *@convert: malloc variable
 *Return: 0 or -1
 */
int not_convert(char *convert)
{
	if (!convert)
	{
		free(convert);
		exit(-1);
	}
	return (0);
}
/**
 * get_int - convert a int to a string
 * @d: int to print
 * Return: total members of the int
 */
int get_int(va_list d)
{
	char *convert;
	int num = va_arg(d, int);
	unsigned int aux = num;
	int ndigit, pos = 0, dig = 0, i, auxsize = 0, pos1 = 0;

	if (aux == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		aux = aux * -1;
		auxsize = 1;
	}
	for (ndigit = 0; aux > 0; ndigit++)
		aux = aux / 10;
	convert = malloc(sizeof(char) * ndigit + auxsize);
	not_convert(convert);
	if (num < 0)
	{
		ndigit++;
		convert[0] = '-';
		aux = num * -1;
		pos1 = 1;
	}
	else if (num >= 0)
		aux = num;
	pos = ndigit - 1;
	for (; pos >= pos1; pos--)
	{
		dig = aux % 10;
		aux = aux / 10;
		convert[pos] = dig + '0';
	}
	for (i = 0; i < ndigit; i++)
		_putchar(convert[i]);
	free(convert);
	return (ndigit);
}
