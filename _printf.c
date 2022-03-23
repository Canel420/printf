#include "main.h"

/**
 * convers - Check if format elements is an specifier.
 *
 * @fmt: Format element
 *
 * Description: Search if the formant element is an specifier for
 * conversion and calls the corresponding conversion function.
 *
 * Return: Pointer to conversion function.
 */

int (*convers(const char *fmt))(va_list)
{
	temp check[] = {
		{"c", p_char},
		{"s", p_str},
		{"i", p_int},
		{"d", p_dec},
		{"r", p_str_r},
		{"b", p_int_b},
		{NULL, NULL}
	};

	int i;

	for (i = 0 ; check[i].s; i++)
	{
		if (*fmt == *(check[i].s))
			break;
	}
	return (check[i].f);
}

/**
 * _printf - Print a string that can be modified with specifiers
 * to include any type of data.
 *
 * @format: String to print
 *
 * Description: Tages a string given and replace
 * specifiers with any type of data requiered.
 *
 * Return: The amount of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{

		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				i++;
				len++;
			}
			if (format[i + 1] == '\0')
			{
				_putchar(format[i]);
				len++;
				return (len);
			}
			if (!format[i + 1])
				return (-1);
			f = convers(&format[i + 1]);
			if (f != NULL)
			{
				len += f(args);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++; }
	}
	va_end(args);
	return (len);
}
