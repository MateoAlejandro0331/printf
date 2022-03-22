#include "main.h"
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
 * get_string - prints characters
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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
