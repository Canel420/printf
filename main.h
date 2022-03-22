#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - Structure for specifiers
 *
 * @s: Specifier
 * @f: Conversion function to call.
 *
 * Description: The structure has a char to a string and
 * a pointer to a function.
 */

typedef struct print
{
	char *s;
	int (*f)(va_list);
} temp;


int _putchar(char c);
int _printf(const char *format, ...);

/* Conversion functions */

int p_char(va_list c);
int p_str(va_list s);
int p_int(va_list i);
int p_dec(va_list d);
int p_str_r(va_list r);

#endif /* MAIN_H */
