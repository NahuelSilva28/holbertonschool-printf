#ifndef MAIN_H
#define MAIN_H

/*libraries*/
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

