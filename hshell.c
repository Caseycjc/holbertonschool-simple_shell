#include "main.h"

int main(void)
{
	char *line;
	char **tokens;
	while (true)

	{
		line = hshell_readline();
		tokens = hshell_splitline(line);

		if (tokens[0] != NULL)
		{
			hshell_exec(tokens);
		}
		free(tokens);
		free(line);

		printf("$ ");
	}
}
