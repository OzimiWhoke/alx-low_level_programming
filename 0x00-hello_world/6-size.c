#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(b);
	printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(c);
	printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(f);
	return (0);
}
