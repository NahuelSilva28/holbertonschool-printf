#include "main.h"
/**
*chec
*Return: 
**/
int (*check(const char *format))(va_list)
{


/**
*_printf - print
*@format: List Argument Types Passed to Tunction
*Descripction: Output Accord to Format
*Return: Length Characters Printed
**/
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list lst;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(lst, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check(&format[i + 1]);
		if (f != NULL)
		{
			count += f(lst);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(lst);
	return (count);
}
