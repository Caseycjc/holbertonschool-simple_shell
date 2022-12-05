#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @length: length
 * @s: a string
 * Return: 0.
 */

int input(char *s, int length);

int main(void)
{
	char *buffer;
	size_t bufsize = 32;

	buffer = (char *) malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("$ %s\n", buffer);

	return (0);
}
