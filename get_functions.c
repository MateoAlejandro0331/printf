#include "main.h"
/**
 * _printf - the same funtion printf form the standar library
 * @format: format of impresion
 * Return:  number of characters printed
 */
int _printf(const char *format, ...)
{
	get_fun type[] = {
		{"c", get_char},
		{"s", get_string},
		{NULL, NULL}};
	int i, j, print = 0;
	va_list unknown_parameters;
	va_start(unknown_parameters, format);

	for (i = 0; format[i] && format; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; type[j].shape; j++)
			{
				if (*(type[j].shape) == format[i + 1])
				{
					print += type[j].f(unknown_parameters);
					i += 2;
					break;
				}
			}
		}
		if (format[i + 1] == '%' && format[i] == '%')
		{
			print += 1;
			_putchar('%');
				i +=2;
		}
		if (format[i] != '%')
		{
			print++;
			_putchar(format[i]);
		}
		else
		{
			i--;
		}
}
va_end(unknown_parameters);
return (print);
}
