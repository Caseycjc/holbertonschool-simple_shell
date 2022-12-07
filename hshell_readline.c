#include "main.h"

char* hshell_readline(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	
	return (line);
}