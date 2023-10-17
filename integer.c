#include "printf_functions.h"

/**
* customDec - this function prints signed integers
* @mine: this is the argument to be printed
* Return: number of digits printed
*/

int customDec(va_list mine)
{
	long int b = va_arg(mine, int);
	long int d = 0;

	if (b < 0)
	{
		_putchar('-');
		b = -b;
		d++;
	}
	d = customDigit(b, d);

	return (d);
}

/**
* customDigit - this function prints digits of an integer
* @b: Integer
* @d: length
* Return: number of digits printed
*/

int customDigit(long int b, long int d)
{
	if (b / 10)
		d = customDigit(b / 10, d);
	_putchar(b % 10 + '0');
	d++;

	return (d);
}

/**
* customUn - this function prints an unsigned integer
* @mine: argument to be printed
* Return: number of digits printed
*/

int customUn(va_list mine)
{
	unsigned int b = va_arg(mine, unsigned int);
	long int d = 0;

	d = customDigitUn(b, d);

	return (d);
}

/**
* customDigitUn - this function prints the digit of an unsigned integer
* @b: Integer
* @d: length
* Return: numbeer of digits printed
*/

int customDigitUn(unsigned int b, long int d)
{
	if (b / 10)
		d = customDigitUn(b / 10, d);
	_putchar(b % 10 + '0');
	d++;

	return (d);
}
