#ifndef PRINTF_FUNCTIONS_H
#define PRINTF_FUNCTIONS_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct CharPrint - Handles printing task
* @c: format specifier
* @p_a: function pointer
*/
typedef struct CharPrint
{
	char *c;
	int (*p_a)(va_list arg);
} StructPrint;

int _putchar(char c);
int _printf(const char *format, ...);
int mine_puts(char *str);
int customC(va_list mine);
int customP(va_list mine __attribute__((unused)));
int customS(va_list mine);
int customDec(va_list mine);
int customDigit(long int b, long int d);
int customUn(va_list arg);
int customDigitUn(unsigned int b, long int d);
int customB(va_list arg);

#endif /* PRINTF_FUNCTIONS_H */
