#include "main.h"
/**
 *main -Entry point
 *Return: 0 success
 */
int main(void)
{
	int len;

	len = _printf("Character: %c\n", 'A');
	_printf("Length: %d\n", len);

	len = _printf("String: %s\n", "Hello, World!");
	_printf("Length: %d\n", len);

	len = _printf("Integer: %d\n", 42);
	_printf("Length: %d\n", len);

	len = _printf("Unsigned Integer: %u\n", 12345);
	_printf("Length: %d\n", len);

	len = _printf("Hexadecimal: %x\n", 255);
	_printf("Length: %d\n", len);

	len = _printf("Percent: %%\n");
	_printf("Length: %d\n", len);

	return (0);
}
