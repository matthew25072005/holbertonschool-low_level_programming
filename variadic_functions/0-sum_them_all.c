#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int a, b = 0;

	va_start(nums, n);

	for (a = 0; a < n; a++)
		b += va_arg(nums, int);

	va_end(nums);

	return (b);
}
