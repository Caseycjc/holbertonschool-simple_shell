#include "main.h"

int main(void)
{
	char *line;
	char **tokens;
	while (true)

	{
		printf("$ ");

		line = hshell_readline();
		tokens = hshell_splitline(line);

		if (tokens[0] != NULL)
		{
			hshell_exec(tokens);
		}
		free(tokens);
		free(line);
	}
}
