#include "main.h"

char* hshell_readline()
{
    char *line = NULL;
    size_t buflen = 0;
    getline(&line, &buflen, stdin);
    return (line);
}