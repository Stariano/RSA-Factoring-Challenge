#include "factors.h"

/**
 * main - Main function will read files and call Factoring func.
 * @argc: Counter for how many commands written after the file.
 * @argv: Pointer to every written command after the file, imagine it as va_list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	size_t len = 0;
	FILE *fp;
	const size_t line_size = 300;
	char *buffer = malloc(line_size);

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

	while (fgets(buffer, line_size, fp) != NULL)
	{
		printf("%s", buffer);
		factoring(buffer);
	}

	fclose(fp);
	free(buffer);
	return (0);
}
