#include "shell.h"

int main(int ac, char **argv)
{
    char *lineptr;
    size_t n = 0;

    //printng a prompt
    char *prompt = "(Shell)$ ";

    printf("%s", prompt);

    // reading input
    getline(&lineptr, &n, stdin);

    // printing out the input
    printf("%s\n", lineptr);

    free(lineptr);
    return (0);
}