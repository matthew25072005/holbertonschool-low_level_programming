#include <stdio.h>
#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int a, b = 0;

	va_start (nums, n);

	for (a = 0; a < n; a++)
		b += va_arg(nums, int);

	va_end (nums);

	return (b);
}
