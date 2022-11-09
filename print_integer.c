#include "main.h"

/**
* print_int - function that prints an integer
* @i: integer
* Return: number chars and digits
*/
int print_int(va_list i)
{
	int t[10];
	int var1, op1, f, sum, count;

	f = va_arg(i, int);
	count = 0;
	op1 = 1000000000;
	t[0] = f / op1;
	for (var1 = 1; var1 < 10; var1++)
	{
		op1 /= 10;
		t[var1] = (f / op1) % 10;
	}
}
