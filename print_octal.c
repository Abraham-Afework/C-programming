#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_octal - convert positive int to octal numbers
 *
 * @o: the number to be printed to octal
 * Return: the length of the binary number.
 *
 */
int print_octal(va_list o)
{
	int j, k, l, count;
	int integer[100];
	unsigned int num;

	num = va_arg(o, unsigned int);
	k = count = 0;
	if (num)
	{
		while (num != 0)
		{
			j = num % 8;
			num = num / 8;
			integer[k] = j;
			k++;
		}
		for (l = k - 1; l >= 0; l--)
		{
			_putchar(integer[l] + '0');
			count++;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
