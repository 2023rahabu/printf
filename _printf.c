#include "main.h"

/**
 * _printf - function that acts exactly like printf
 * @format: format
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	int j, k, num_char = 0;
	va_list mine;

	StructPrint array[] = {{"c", customC}, {"s", customS}, {"%", customP},
	{"d", customDec}, {"u", customUn},
		{"i", customDec},  {"S", customS}
	};
	va_start(mine, format);
	if (format == NULL)
		return (-1);
	for (j = 0; format[j]; j++)
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			num_char++;
		}
		else
		{
			if (format[j + 1] == ' ' || format[j + 1] == '\0')
				return (-1);
			for (k = 0; k < (int)(sizeof(array) / sizeof(array[0])); k++)
			{
				if (*(format + j + 1) == *(array[k].c))
					break;
			}
			if (k < (int)(sizeof(array) / sizeof(array[0])))
			{
				num_char += array[k].p_a(mine);
				j++;
			}
			else
			{
				_putchar(format[j]);
				num_char++;
			}
		}
	}
	va_end(mine);
	return (num_char);
}
