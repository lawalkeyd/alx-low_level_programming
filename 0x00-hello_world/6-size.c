#include <stdio.h>

/**
 * main - print ize of c types
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(long));
	printf("Size of a int: %lu byte(s)\n", sizeof(unsigned long));
	printf("Size of a long: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

