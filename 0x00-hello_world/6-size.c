#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int m;
	float n;

	printf("size of a char: %lu byte(s)\n", sizeof(i));
	printf("size of an  int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("size of a long int: %lu byte(s)\n", sizeof(k));
	printf("size of a long long int: %lu byte(s)\n", sizeof(m));
	printf("size of a float: %lu byte(s)\n", sizeof(n));
	return (0);
}
