#include "main.h"
/**
 * match_fun - match the function to print
 * @format: format parameters
 * Return: match functon
 */
int (*match_fun(const char *format))(va_list)
{
	get_fun type[] = {
		{"c", get_char},
		{"s", get_string},
		{"d", get_int},
		{"i", get_int},
		{"b", get_binary},
		{NULL, NULL}
		};
		int t;

		for (t = 0; type[t].shape != NULL; t++)
		{
			if (*(type[t].shape) == *format)
				break;
		}
	return (type[t].f);
}
