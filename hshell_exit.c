#include "main.h"

/**
* _handle_exit - handles exit
* @u_tokens: ...
* @line: ...
* Return: nothing to return
*/

void _handle_exit(char **u_tokens, char *line);
void frees_tokens(char **u_tokens)
{
int status = 0;
char *line = NULL;

if (u_tokens[1] == NULL || (!strcmp(u_tokens[1], "0")))
{
frees_tokens(u_tokens);
free(line);
exit(0);
}
if (status != 0)
{
frees_tokens(u_tokens);
free(line);
exit(status);
}
else
{
puts("exit: illegal number: ");
puts(u_tokens[1]);
puts("\n");
exit(2);
}
frees_tokens(u_tokens);
free(line);
exit(EXIT_SUCCESS);
}
