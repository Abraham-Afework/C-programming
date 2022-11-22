#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_unsigned - print out positive numbers
 * @u: the number to be printed
 * Return: the length of the number
 */
int print_unsigned(va_list u)
{
	int i, j, k, l, count;
	unsigned int num, integer[200000];

	num = va_arg(u, unsigned int);
	count = 0;

	if (num < 100)
	{
		i = num / 10;
		j = num % 10;
		if (num > 9)
		{
			_putchar(i + '0');
			count++;
		}
		_putchar(j + '0');
		count++;
	}
	else if (num >= 100)
	{
		while (num != 0)
		{
			j = num % 10;
			num = num / 10;
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
		_putchar ('0');
		return (1);
	}
	return (count);
}
