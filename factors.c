#include "factors.h"

/**
 * main - main function
 * @argc: number of input argumnets
 * @argv: arguments entered
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	size_t line_number;
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

	while ((getline(&buffer, &line_number, fp)) != -1)
		factorize(buffer);

	return (0);
}
