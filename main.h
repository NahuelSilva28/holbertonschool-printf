#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>

#include <unistd.h>

#include <stdarg.h>

#include <limits.h>

/**
* struct print - printf type with corresponding print function
* @t: print type
* @f: print function
*/

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

/* Functions */
int _putchar(char c);

int _printf(const char *format, ...);

int print_char(va_list c);

int print_str(va_list s);

int print_arg(va_list p);

int print_int(va_list i);

#endif
