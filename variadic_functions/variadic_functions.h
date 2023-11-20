#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* struct print - print
* @type: the operator
* @f: the function associated
*/
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;

int sum_them_all(const unsigned int n, ...);

#endif
