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

	printf("size of a char: %d byte(s)\n", sizeof(i));
	printf("size of an  int: %d byte(s)\n", sizeof(j));
	printf("size of a long int: % byte(s)\n", sizeof(k));
	printf("size of a long long int: %d byte(s)\n", sizeof(m));
	printf("size of a float: %d byte(s)\n", sizeof(n));
	return (0);
}
