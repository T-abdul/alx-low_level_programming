#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of argument passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void) argv;

	printf("%d\n", argc -1);

	return (0);
}
