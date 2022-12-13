# Simple Shell Project for Holberton School
### Authors [Casey Chase](https://github.com/Caseycjc) and [Teylor Chapman](https://github.com/teylorchapman)

## Description:

In this project we are tasked with creating our own simple UNIX shell command interpreter. The program must have the exact same output as ``` sh ``` (``` /bin/sh ```) as well as the exact same error output. The only difference is when you print an error, the name of the program must be equivalent to your ``` argv[0] ```.

## Compilation:

```$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh ```

## Tasks:

0.  README, man, AUTHORS
    * write a ```README```, a ```man``` for your shell, and a ```AUTHORS``` file at the root of the repository, listing all individuals that contributed content to the repository.
1. Betty would be proud
    * write a beautiful code that passes the Betty checks.
2. Simple shell 0.1
    * write a UNIX command line interpreter. 
3. Simple shell 0.2
    * simple shell 0.1 + handle command lines with arguments
4. Simple shell 0.3
    * simple shell 0.2 + handle the ```PATH```, ```fork``` must not be called if the command doesn't exist
5. Simple shell 0.4
    * simple shell 0.3 + implement the ```exit``` built-in that exits the shell, you don't have to handle any argument to the built-in ```exit```
6. Simple shell 1.0
    * simple shell 0.4 + implement the ```env``` built-in that prints the current environment