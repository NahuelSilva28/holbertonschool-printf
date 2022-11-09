#include "main.h"

/**
* print_char - Function that print char
* @c: Char
* Return: 1
*/
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
* print_str - Function that prints string
* @s: String
* Return: Number Chars Printed
*/
int print_str(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (!str)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
* print_arg - Function that prints %
* @p:  Arguments
* Return: Characters Printed.
*/
int print_arg(va_list p)
{
	(void)p;
	_putchar('%');
	return (1);
}
