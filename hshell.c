#include "main.h"

int main(void)
{
    while (true)
    {
        printf("$ ");
        char *line;
        char **tokens;

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