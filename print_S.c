#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_S - writes the character str to stdout
 * @str: The string to print
 *
 * Return: the number of character outputs
 */
int print_S(va_list str)
{
	char *string;
	int i;

	i = 0;
	string = va_arg(str, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[i])
	{	
		_putchar(string[i]);
		i++;
	}
	return (i);
}
