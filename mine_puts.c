#include "printf_functions.h"
/**
 *mine_puts - function for printing string
 *@str: parameter string
 *Return: character count
 */
int mine_puts(char *str)
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
