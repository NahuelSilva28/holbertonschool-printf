#include "main.h"
/**
*_printf - print
*
*
*Return:
**/
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list lst;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
