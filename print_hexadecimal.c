#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_hexadecimal - convert a number to  hexadecimal numbers
 *
 * @num: the number to be printed to hexadecimal
 * @checker: checks to print the hexa in upper or lower case
 * Return: the length of the octal number.
 *
 */
int print_hexadecimal(unsigned int num, unsigned int checker)
{
	int j, k, l, count, alphacase, upper, lower;
	int integer[200];

	k = count = 0;
	lower = 39;
	upper = 7;

	if (checker)
	{
		alphacase = lower;
	}
	else
		alphacase = upper;

	if (num)
	{
		while (num != 0)
		{
			j = num % 16;

			if (j >= 10)
				j = j + alphacase;
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

/**
* print_x - takes an unsigned int an prints it in lowercase hex
* @x: unsigned int to print
* Descriptions: prints in lowercase hex with _putchar
* Return: size of the output
*/

int print_x(va_list x)
{
	return (print_hexadecimal(va_arg(x, unsigned int), 1));
}

/**
* print_X - takes an unsigned int an prints it in uppercase hex
* @X: unsigned int to print
* Descriptions: prints in uppercase hex with _putchar
* Return: size of the output
*/

int print_X(va_list X)
{
	return (print_hexadecimal(va_arg(X, unsigned int), 0));
}

