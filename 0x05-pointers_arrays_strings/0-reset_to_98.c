#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: reset value of int to 98
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	{
	putchar(n);
	*p = 98;
	putchar(n);
	}
	return (0);
}
