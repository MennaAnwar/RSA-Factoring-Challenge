#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			break;
		}
	}

	return (0);
}

/**
 * main - main function
 * @argc: number of arguments entered
 * @argv: arguments entered
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	size_t count;
	char *buffer = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &count, fp) != -1)
		factorize(buffer);

	return (0);
}
