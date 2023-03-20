#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by EMPRESS2
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(1));
	printf("Size of a int:%lu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(8));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(4));
	return (0);
}
