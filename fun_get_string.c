#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * get_char - prints characters
 * @c: character to print
 * Return: total characters
 */
int get_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
/**
 * get_string - prints string
 * @s: string to print
 * Return: total memebers of the string
 */
int get_string(va_list s)
{
	int x;
	char *string = va_arg(s, char *);

	if (string == NULL)
		string = "(null)";
	for (x = 0; string[x]; x++)
	{
		_putchar(string[x]);
	}
	return (x);
}
/**
 * get_revstr - prints string
 * @r: string to print
 * Return: total memebers of the string
 */
int get_revstr(va_list r)
{
	int len = 0, lenaux;
	char *string = va_arg(r, char *);

	len = strlen(string);
	lenaux = len;
	for (; len >= 0; len--)
	{
		_putchar(string[len]);
	}
	return (lenaux);
}
