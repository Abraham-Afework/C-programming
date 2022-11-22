#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_special_string - writes the character str with a special to stdout
 * @str: The string to print
 *
 * Return: the number of character outputs
 */
int print_special_string(va_list str)
{
	char *string;
	int count, len, s;

	count = 0;
	string = va_arg(str, char *);

	while (string[count] != '\0')
	{
		if (string[count] < 32 || string[count] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			s = string[count];
			if (s < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_hexadecimal(s, 0);
		}
		else
		{
			_putchar(string[count]);
			len++;
		}
		count++;
	}
	return (len);
}
