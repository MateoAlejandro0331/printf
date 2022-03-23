#include "main.h"
/**
 * _printf - the same funtion printf form the standar library
 * @format: format of impresion
 * Return:  number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, print = 0;
	int (*k)(va_list);
	va_list unknown_parameters;

	va_start(unknown_parameters, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			print++;
			i++;
		}
		if (!format[i])
		{
			return (print);
		}
		k = match_fun(&format[i + 1]);
		if (k != NULL)
		{
			print += k(unknown_parameters);
			i += 2;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
		print++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(unknown_parameters);
	return (print);
}
