#include "main.h"

/**
 * p_dec - Prints a decimal integer
 *
 * @d: Decimal integer to print
 *
 * Description: Prints a decimal integer.
 * Return: length of the integer.
 */

int p_dec(va_list d)
{
	int arr[10];
	int n, m, j, sum, len = 0;

	n = va_arg(d, int);
	m = 1000000000;
	arr[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		arr[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
		for (j = 0; j < 10 ; j++)
			arr[j] *= -1;
	}

	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			len++;
		}
	}

	return (len);
}

/**
* p_int - function to print a integer number
* @i: integer to print
*
* Description: Prints any integer.
*
* Return: the number of characters printed
* On error, -1 is returned, and errno is set appropriately.
*/

int p_int(va_list i)
{
	int count, n2, num2;
	int n, num3, div;

	n = va_arg(i, int);
	n2 = n;
	count = 0;

	while (n2 != 0)
	{
		n2 = n2 / 10;
		count++;
	}

	div = 1;
	for (num2 = 1 ; num2 < count ; num2++)
	{
		div = div * 10;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		for (num3 = count + 1 ; num3 > 1 ; num3--)
		{
			_putchar ((n / div) % 10 + '0');
			div = div / 10;
		}
	}
	return (count);
}
