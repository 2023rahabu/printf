#include "main.h"
/**
 *_puts - function for printing string
 *@str: parameter string
 *Return: character count
 */
int _puts(char *str)
{
	int count;

	count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
