#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: the number of argurments
 * @argv: array of pointers
 * Return: product of two argurments
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}