#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convetrt the positive int to binary numbers
 *
 * @b: the number to be printed to binary
 * Return: the length of the binary number.
 *
 */
int print_binary(va_list b)
{
	int j, k, l, count;
	int integer[100];
	unsigned int num;

	num = va_arg(b, unsigned int);
	k = count = 0;
	if (num)
	{
		while (num != 0)
		{
			j = num % 2;
			num = num / 2;
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
