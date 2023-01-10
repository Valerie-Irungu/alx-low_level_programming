#include <stdio.h>
/**
 * main - prints the number of argurments passed into it
 * @argc: the number of argurments given to the program
 * @argv: array of pointers to the argurment
 * Return: 0 on success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
