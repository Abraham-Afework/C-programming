#include"main.h"
/**
 * print_pointer - prints an hexdecimal number.
 * @pointer: arguments.
 * Return: counter the length of the hexadecimal number.
 */
int print_pointer(va_list pointer)
{
	void *p;
	unsigned long int a;
	int count, b;

	char *string = "(nil)";

	p = va_arg(pointer, void *);

	if (p == NULL)
	{
		for (count = 0; string[count] != '\0'; count++)
		{
			_putchar(string[count]);
		}
		return (count);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hexadecimal(a, 1);
	return (b + 2);
}
