#include <stdio.h>

/**
 * main - demonstrates the use of
 * * - value at address
 * & - address of
 * Return: always 0
 */

int main()
{
	int i = 10;
	int *j;
	j = &i;

	printf("Address of i = %p\n", &i);
	printf("Address of i = %p\n", j);
	printf("Address of j = %p\n", &j);
	printf("Value of i = %d\n", i);
	printf("Value of i = %d\n", *(&i));
	printf("Value of i = %d\n", *j);
	printf("Value of j = %p\n", j);

	return (0);

}
