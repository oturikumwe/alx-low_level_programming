#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If k == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int t, sum = 0;
	int k =0;

	va_start(ap, k);

	for (t = 0; t < k; t++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

