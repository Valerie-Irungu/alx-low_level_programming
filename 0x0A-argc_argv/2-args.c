#include <stdio.h>
/**
 * main - prints all arguurments
 * @argc: number of argurments given to the program
 * @argv: array of pointers 
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
		printf("%s\n", argv[f]);

	return (0);
}
