#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/*
* File: main.h
* Auth: Mateo López - Jhojan Perlaza
* Desc: Header file containing declarations for all functions
* used in the _printf.
*/
/**
 * struct get - helps to match the parameters
 *
 * @shape: The operator
 * @f: The function associated
 */
typedef struct get
{
	char *shape;
	int (*f)(va_list);
} get_fun;

int _printf(const char *format, ...);
int get_char(va_list c);
int get_string(va_list s);
int get_int(va_list d);
int get_binary(va_list b);
int (*match_fun(const char *format))(va_list);
int _putchar(char c);

#endif
