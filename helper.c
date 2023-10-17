#include "printf_functions.h"

/**
* customC - function prints a character
* @mine: argument
* Return: 1
*/

int customC(va_list mine)
{
	char c = va_arg(mine, int);

	_putchar(c);
	return (1);
}

/**
* customP - function prints a % symbol
* @mine: argument used here
* Return: 1
*/

int customP(va_list mine __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
* customS - function prints a string
* @mine: argument used here
* Return: the number of character in the string
*/

int customS(va_list mine)
{
	int num_string = 0;
	char *s = va_arg(mine, char *);

	if (s == NULL)
		s = "(null)";

	for (num_string = 0; s[num_string] != '\0'; num_string++)
	{
		_putchar(s[num_string]);
	}

	return (num_string);
}
