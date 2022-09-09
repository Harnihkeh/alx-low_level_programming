#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{   char i = i;
    int j = j;
    long int k = k;
    long long int m = m;
    float n = n;

    printf("Size of a char: %lu byte(s)", sizeof(i));
    printf("Size of an int: %lu byte(s)", sizeof(j));
    printf("Size of a long int: %lu byte(s)", sizeof(k));
    printf("Size of a long long int: %lu byte(s)", sizeof(m));
    printf("Size of a float: %lu byte(s)", sizeof(n));
    return (0);
}

