#include "main.h"
/**
* execbuiltincommands - executes a builtin command
* @u_tokens: ..
* @line: ..
* @_strcmp: ...
* @u_tokens: ...
* @line: ...
* return: 1 if theres a built-in commands, otherwise 0
*/

int execbuiltincommands(char **u_tokens, char *line)
{
int i = 0;
char *listbuiltincmds[] = { "exit", "env" };
while (listbuiltincmds[i])
{
if (strcmp(u_tokens[0], listbuiltincmds[i]) == 0)
{
switch (i)
{
case 0:
_handle_exit(u_tokens, line);
__attribute__ ((fallthrough));
case 1:
_print_env();
return (1);
default:
break;
}
}
i++;
}
return (0);
}
